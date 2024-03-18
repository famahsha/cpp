/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:49:38 by Famahsha          #+#    #+#             */
/*   Updated: 2024/03/16 12:49:57 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	
	std::cout << "Default constructor for WrongAnimal class called" << std::endl;

	type = "";
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	
	std::cout << "Copy constructor for WrongAnimal class called" << std::endl;
	
	*this = src;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
	std::cout << "Copy assignment operator for WrongAnimal class called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	
	std::cout << "Destructor for WrongAnimal class called" << std::endl;

}

std::string WrongAnimal::getType(void) const
{
	return (type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong Animal making sound" << std::endl;
}