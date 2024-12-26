/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:43:53 by Famahsha          #+#    #+#             */
/*   Updated: 2024/07/15 12:43:54 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP



#include <iostream>
#include <string>
#include <algorithm>
#include <stack> // stack is a container adapter
#include <list>

class RPN{
	private:
        //std::stack is container adapter,std::list<int> is underlying container
        // std::stack uses std::list to store integers
		std::stack<int, std::list<int> > stack;
		int flag;
	public:
		RPN(void);
		RPN(RPN const &src);
		RPN & operator=(RPN const & rhs);
		~RPN(void);
		int getFlag(void);
		int parse(std::string expression);
		int RPN_algorithm(std::string expression);
		int do_op(int a, int b, char op);
};
	int isOperator(char ch);
	int isOperand(char ch);

# endif