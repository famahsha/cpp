/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:43:44 by Famahsha          #+#    #+#             */
/*   Updated: 2024/07/15 12:43:45 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

// ---REVERSE POLISH NOTATION---

int isOperator(char ch)
{
	if(ch == '+'|| ch == '-'|| ch == '*'|| ch == '/')
		return (1);
	return (-1);
}
int isOperand(char ch)
{
	if(ch >= '0' && ch <= '9')
		return (1);
	return (-1);
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Error: Invalid Amount of Arguments" << std::endl;
        return 0;
    }

    std::string expression = argv[1];
    for (size_t i = 0; i < expression.size(); ++i)
    {
        if (!(expression[i] >= '0' && expression[i] <= '9') && 
            expression[i] != '+' && expression[i] != '-' &&
            expression[i] != '*' && expression[i] != '/' && expression[i] != ' ')
        {
            std::cout << "Error: Invalid Character(s) in Argument" << std::endl;
            return -1;
        }
    }

    RPN main;
    int result;
    if (main.parse(expression) == 0)
    {
        result = main.RPN_algorithm(expression);
        if (main.getFlag() == 0)
            std::cout << result << std::endl;
    }
    else
    {
        std::cout << "Error: Invalid RPN expression" << std::endl;
    }

    return 0;
}
