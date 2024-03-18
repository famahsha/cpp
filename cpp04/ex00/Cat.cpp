/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:10:24 by Famahsha          #+#    #+#             */
/*   Updated: 2024/03/16 12:44:32 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat class constructor called" << std::endl;
	type = "Cat";
}

Cat::~Cat()
{
	std::cout << "destructor for Cat class called" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow Meow !" << std::endl;
}