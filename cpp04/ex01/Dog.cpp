/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:12:53 by Famahsha          #+#    #+#             */
/*   Updated: 2024/03/16 14:15:00 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog() : Animal()
{
	std::cout << "Dog class constructor called" << std::endl;
	Dogbrain = new Brain();
	type = "Dog";
}

Dog::Dog(Dog const &src) : Animal(src)
{
	std::cout << "Copy constructor for Dog class called" << std::endl;
	// deep copy of brain
	this->type = src.type;
	this->Dogbrain = new Brain();
}


Dog & Dog::operator=(Dog const & rhs)
{
	std::cout << "Copy assignment operator for Dog class called" << std::endl;
	if (this != &rhs)
	{
		if (Dogbrain != NULL)
			delete Dogbrain;
		//deep copy of brain
		this->type = rhs.type;
		this->Dogbrain = new Brain();
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "destructor for Dog class called" << std::endl;
	delete Dogbrain;
}


void Dog::makeSound(void) const
{
	std::cout << "Woof Woof !" << std::endl;
}