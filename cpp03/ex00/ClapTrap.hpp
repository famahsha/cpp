/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 14:42:39 by Famahsha          #+#    #+#             */
/*   Updated: 2024/03/07 19:07:57 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include<iostream>
#include<string>

class ClapTrap
{
	private:
		std::string name;
		int hitpoints;
		int energypoints;
		int attackdamage;
	public:
		ClapTrap(std::string n);
		~ClapTrap();
		ClapTrap(ClapTrap const &other);
		ClapTrap & operator = (ClapTrap const &rhs);
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif