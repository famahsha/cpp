/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 14:36:43 by Famahsha          #+#    #+#             */
/*   Updated: 2024/02/17 15:47:58 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon &wp) : w(wp)
{
	name = n;
	w = wp;	 
}

HumanA::~HumanA()
{
	std::cout << "HumanA " << name << " destroyed" << std::endl;
}

void HumanA::attack()
{
	std::cout << name << "attacks with their" << w.getType() << std::endl;
}
