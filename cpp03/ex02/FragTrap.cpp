/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 10:28:04 by Famahsha          #+#    #+#             */
/*   Updated: 2024/03/08 10:49:09 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap (std::string n) : ClapTrap(n)
{
	hitpoints = 100;
    energypoints = 50;
    attackdamage = 20;
	std::cout << "FragTrap parameterized constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (this->energypoints <= 0)
	{
		std::cout << "FragTrap " << name << " is out of energy " << std::endl;
		return ;
	}
	std::cout <<  "FragTrap " << name << " attacks " << target << ", causing " << attackdamage << " points of damage! " << std::endl;
	this->energypoints--;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << name << " is giving a high five." << std::endl;
}