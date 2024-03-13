/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 14:56:36 by Famahsha          #+#    #+#             */
/*   Updated: 2024/03/07 21:18:11 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap (std::string n) :name(n), hitpoints(10), energypoints(10), attackdamage(0)
{
	std::cout << "claptrap constructor called" << std::endl;
	
}

ClapTrap::~ClapTrap()
{
	std::cout << "claptrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
	std::cout << "Copy constructor called " << std::endl;
	*this = other;
}

ClapTrap & ClapTrap::operator = (ClapTrap const &rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.name;
		this->hitpoints = rhs.hitpoints;
		this->energypoints = rhs.energypoints;
		this->attackdamage = rhs.attackdamage;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energypoints <= 0)
	{
		std::cout << "ClapTRrap " << name << " is out of energy " << std::endl;
		return ;
	}
	std::cout <<  "ClapTrap " << name << " attacks " << target << ", causing " << attackdamage << " points of damage! " << std::endl;
	this->energypoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitpoints <= 0)
	{
		std::cout << "ClapTrap " << name << " can't take damage because it has no hit points left!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
	this->hitpoints -= amount;
	
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energypoints <= 0 || this->hitpoints <= 0)
	{
		std::cout << "ClapTrap " << name << " can't be repaired because it has no hit points or energy points left!" << std::endl;
		return;
	}
	this->energypoints--;
	this->hitpoints += amount;
}
