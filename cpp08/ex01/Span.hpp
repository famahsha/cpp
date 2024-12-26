/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:24:40 by Famahsha          #+#    #+#             */
/*   Updated: 2024/07/09 13:24:41 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

class checkmaximum : public std::exception
{
	public:
		virtual const char * what () const throw () {
			return ("\033[0;31mError: Trying to insert elemenst more than possible! \033[0m\n");
		}
};

class Span{
	private:
		unsigned int n;
		std::vector<int> nums;
		Span(void); // default constructor
	public:
		Span(int num);
		Span(Span const &src); // Copy Constructor
		Span & operator=(Span const & rhs); // copy assignmnet operator overload
		~Span(void);
		
		//member function
		void addNumber(int numToAdd);
		void betterAddNumber(std::vector<int> vec);
		int shortestSpan(void);
		int longestSpan(void);
};

#endif