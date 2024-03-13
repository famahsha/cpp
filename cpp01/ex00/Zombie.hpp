/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:45:57 by Famahsha          #+#    #+#             */
/*   Updated: 2024/02/15 14:46:52 by Famahsha         ###   ########.fr       */
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
	Zombie(std::string n);
	~Zombie();
	void announce(void);
};

Zombie* newZombie( std::string name );
void	randomChump(std::string name);


# endif