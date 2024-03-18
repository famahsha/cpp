/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:12:53 by Famahsha          #+#    #+#             */
/*   Updated: 2024/03/16 12:45:03 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog class constructor called" << std::endl;
	type = "Dog";
}

Dog::~Dog()
{
	std::cout << "destructor for Dog class called" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "woof woof !" << std::endl;
}