/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:53:41 by Famahsha          #+#    #+#             */
/*   Updated: 2024/03/16 14:20:51 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	std::cout << "Default constructor for WrongCat class called" << std::endl;
	wrongcatbrain = new Brain();
	type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src)
{
	std::cout << "Copy constructor for WrongCat class called" << std::endl;
	*this = src;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
	std::cout << "Copy assignment operator for WrongCat class called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
		this->wrongcatbrain = rhs.wrongcatbrain;
	}
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "Destructor for WrongCat class called" << std::endl;
	delete wrongcatbrain;
}

void WrongCat::makeSound(void) const
{
	std::cout << "Meow !" << std::endl;
}