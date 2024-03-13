/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:11:33 by Famahsha          #+#    #+#             */
/*   Updated: 2024/03/08 13:07:48 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name) , FragTrap(name) , ScavTrap(name)
{
	this->name = name;
	this->ClapTrap::name = name + "_clap_name";
	FragTrap::hitpoints = 100;
    ScavTrap::energypoints = 50;
    FragTrap::attackdamage = 30;
	std::cout << "Diamond trap " << name << " constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "# DiamondTrap " << name << " destructor called ." << std::endl;
}

void	DiamondTrap::attack( const std::string &target )
{
	this->ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI( void )
{
    std::cout << "I am a DiamondTrap named " << name << ", ClapTrap name: " << ClapTrap::name << std::endl;
}