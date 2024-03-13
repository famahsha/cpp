/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 14:21:19 by Famahsha          #+#    #+#             */
/*   Updated: 2024/02/17 15:16:50 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP 


#include<iostream>
#include<string>

#include "Weapon.hpp"

class HumanA{
	private:
		std::string name;
		Weapon &w;
	public:
		HumanA(std::string n, Weapon &wp);
		~HumanA();
	void attack(void);
};


#endif