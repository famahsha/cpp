/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:31:37 by Famahsha          #+#    #+#             */
/*   Updated: 2024/02/17 12:03:45 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"



std::string Zombie::getName(void)
{
	return (name);
}

void Zombie::setName(std::string n)
{
	name = n;
}

Zombie::Zombie()
{
	std::cout <<  name << "zombie created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout <<  name << " destroyed" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
