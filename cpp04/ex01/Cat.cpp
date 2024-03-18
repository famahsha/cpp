/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:10:24 by Famahsha          #+#    #+#             */
/*   Updated: 2024/03/16 14:19:56 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat class constructor called" << std::endl;
	catbrain = new Brain();
	type = "Cat";
}

Cat::Cat(Cat const &src) : Animal(src)
{
	std::cout << "Copy constructor for Cat class called" << std::endl;
	// deep copy of brain
	this->type = src.type;
	this->catbrain = new Brain();
}


Cat & Cat::operator=(Cat const & rhs)
{
	std::cout << "Copy assignment operator for Cat class called" << std::endl;
	if (this != &rhs)
	{
		if (catbrain != NULL)
			delete catbrain;
		//deep copy of brain
		this->type = rhs.type;
		this->catbrain = new Brain();
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "destructor for Cat class called" << std::endl;
	delete catbrain;
}


void Cat::makeSound(void) const
{
	std::cout << "Meow Meow !" << std::endl;
}