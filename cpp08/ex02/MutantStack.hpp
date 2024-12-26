/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:24:49 by Famahsha          #+#    #+#             */
/*   Updated: 2024/07/09 13:24:50 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>
#include <string>


template <typename T>

class MutantStack : public std::stack<T>
{
	public:
    //using typdef to make easier to refer some types
		typedef std::stack<T> main_stack;
		typedef typename main_stack::container_type container; // to access th econtainer_type from stack
		typedef typename container::iterator iterator; // accessing iterator pointer from container

	MutantStack(void)
	{
		std::cout << "Default constructor for MutantStack called";
		main_stack();
	}
	
	MutantStack(MutantStack<T> const & src) : main_stack(src)
	{
		std::cout << "Copy constructor for MutantStack called";
	}
	
	main_stack & operator=(main_stack const & rhs)
	{
		if (*this != rhs)
			*this = rhs;
		return (*this);
	}

	~MutantStack(void)
	{
		std::cout  << "Destructor for MutantStack called";
	}
	

	// begin and end return an iterator
	iterator begin(void)
	{
		return this->c.begin();
	}

	iterator end(void)
	{
		return this->c.end();
	}
};

#endif