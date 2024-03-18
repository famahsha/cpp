/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:53:41 by Famahsha          #+#    #+#             */
/*   Updated: 2024/03/16 12:54:48 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{

	std::cout << "Default constructor for WrongCat class called" << std::endl;
	type = "WrongCat";
}

WrongCat::~WrongCat(void)
{
	std::cout << "Destructor for WrongCat class called" << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << "Meow !" << std::endl;
}
