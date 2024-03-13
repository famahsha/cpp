/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 15:25:16 by Famahsha          #+#    #+#             */
/*   Updated: 2024/02/17 15:40:19 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP 


#include<iostream>
#include<string>

#include "Weapon.hpp"

class HumanB{
	private:
		std::string name;
		Weapon *w;
	public:
		HumanB(std::string n);
		~HumanB();
		void setWeapon(Weapon &wp);
		void attack(void);
};

#endif