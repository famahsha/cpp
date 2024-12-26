/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:43:49 by Famahsha          #+#    #+#             */
/*   Updated: 2024/07/15 12:43:50 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void)
{
	flag = 0;
}

RPN::RPN(RPN const &src)
{
	*this = src;
}

RPN & RPN::operator=(RPN const & rhs)
{
	if (this != &rhs)
	{
		this->stack = rhs.stack;
		this->flag = rhs.flag;
	}
	return *this;
}

RPN::~RPN(void)
{}

int RPN::getFlag(void)
{
	return (flag);
}

int RPN::parse(std::string expression)
{
    int operand_count = 0; // Counter for operands (numbers)
    int operator_count = 0; // Counter for operators
    std::string::iterator it = expression.begin(); 

    while (it != expression.end()) 
    {
        // Skip any spaces
        while (it != expression.end() && *it == ' ')
            it++;
        if (it == expression.end())
            break;
        if (isOperand(*it))
        {
            operand_count++; 
            it++;
            // Skip digits in case of multi-digit numbers
            while (it != expression.end() && isOperand(*it))
                it++;
        }
        else if (isOperator(*it))
        {
            operator_count++;
            it++;
        }
        else
        {
            std::cout << "Invalid character in RPN expression" << std::endl;
            return 1;
        }
        if (operator_count >= operand_count)
        {
            std::cout << "Invalid RPN expression: Too many operators" << std::endl;
            return 1;
        }
    }
    if (operand_count != operator_count + 1)
    {
        std::cout << "Invalid RPN expression: Incorrect number of operands" << std::endl;
        return 1;
    }
    return 0;
}

int RPN::do_op(int a, int b, char op)
{
	if(op == '+')
		return (b + a);
	else if(op == '-')
		return (b - a);
	else if(op == '*')
		return (b * a);
	else
	{
		if (a == 0)
		{
			std::cout << "Error: Tried to divide by 0"  << std::endl;
			flag = 1;
			return (-1);
		}
		return (b / a);
	}
}

int RPN::RPN_algorithm(std::string expression)
{
    int a, b, res;
    std::string::iterator it;
    
    it = expression.begin();
    while (it != expression.end())
    {
        // Skip any spaces
        while (it != expression.end() && *it == ' ')
            ++it;
        if (it == expression.end())
            break;

        if (isOperator(*it) == 1)
        {
            if (stack.size() < 2)
            {
                std::cout << "Error: Not enough operands for operator " << *it << std::endl;
                flag = 1;
                return -1;
            }
            a = stack.top();
            stack.pop();
            b = stack.top();
            stack.pop();
            res = do_op(a, b, *it);
            if (res == -1 && flag == 1)
                return -1;
            stack.push(res);
        }
        else if (isOperand(*it) == 1)
        {
            stack.push((*it - '0'));
        }
        else
        {
            std::cout << "Error: Invalid character in RPN expression: " << *it << std::endl;
            flag = 1;
            return -1;
        }
        ++it;
    }
//AFTER ENTIRE, check that there is exactly one value left on the stack.
    if (stack.size() != 1)
    {
        std::cout << "Error: Invalid RPN expression: stack size is " << stack.size() << std::endl;
        flag = 1;
        return -1;
    }

    return stack.top();
}
