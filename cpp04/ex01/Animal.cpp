/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:03:04 by Famahsha          #+#    #+#             */
/*   Updated: 2024/03/16 12:44:37 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "constructor for Animal class called" << std::endl;
	type = "animal";
}

Animal::Animal(Animal const &src)
{
	std::cout << "Copy constructor for Animal class called" << std::endl;
	*this = src;
}

Animal & Animal::operator=(Animal const & rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return (*this);
}
Animal::~Animal(void)
{
	std::cout << "Destructor for Animal class called" << std::endl;
}

std::string Animal::getType(void) const
{
	return (type);
}

void Animal::makeSound(void) const
{
	std::cout << "animal making sound" << std::endl;
}