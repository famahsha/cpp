/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 15:32:07 by Famahsha          #+#    #+#             */
/*   Updated: 2024/02/17 15:48:30 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string n)
{
	name = n;
}

HumanB::~HumanB()
{
	std::cout << "HumanB " << name << " destroyed" << std::endl;
}



void HumanB::attack()
{
	std::cout << name << "attacks with their" << w->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &wp)
{
	w = &wp;
}