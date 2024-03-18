/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:03:04 by Famahsha          #+#    #+#             */
/*   Updated: 2024/03/16 15:48:57 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << "constructor for AAnimal class called" << std::endl;
	type = "AAnimal";
}

AAnimal::AAnimal(AAnimal const &src)
{
	std::cout << "Copy constructor for AAnimal class called" << std::endl;
	*this = src;
}

AAnimal & AAnimal::operator=(AAnimal const & rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return (*this);
}
AAnimal::~AAnimal(void)
{
	std::cout << "Destructor for AAnimal class called" << std::endl;
}

std::string AAnimal::getType(void) const
{
	return (type);
}

void AAnimal::makeSound(void) const
{
	std::cout << "AAnimal making sound" << std::endl;
}