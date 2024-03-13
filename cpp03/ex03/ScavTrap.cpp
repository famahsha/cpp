/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:08:56 by Famahsha          #+#    #+#             */
/*   Updated: 2024/03/08 13:10:10 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap (std::string n) : ClapTrap(n)
{
	hitpoints = 100;
    energypoints = 50;
    attackdamage = 20;
	std::cout << "Scavtrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scavtrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->energypoints <= 0)
	{
		std::cout << "ScavTRrap " << name << " is out of energy " << std::endl;
		return ;
	}
	std::cout <<  "ScavTrap " << name << " attacks " << target << ", causing " << attackdamage << " points of damage! " << std::endl;
	this->energypoints--;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}