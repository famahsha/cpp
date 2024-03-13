/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 14:20:14 by Famahsha          #+#    #+#             */
/*   Updated: 2024/02/17 14:21:08 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"

Weapon::Weapon(std::string t)
{
    type = t;
}

Weapon::~Weapon() {

}

std::string Weapon::getType(void) {
    return type;
}

void Weapon::setType(std::string str) {
    type = str;
}
