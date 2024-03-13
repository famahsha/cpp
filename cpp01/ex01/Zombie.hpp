/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:45:57 by Famahsha          #+#    #+#             */
/*   Updated: 2024/02/17 11:55:17 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>
#include <string>


class Zombie
{
private:
	std::string name;
public:
	Zombie();
	~Zombie();
	std::string getName(void);
	void setName(std::string str);
	void announce(void);
};

Zombie* zombieHorde( int N, std::string name );

# endif