/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:36:57 by Famahsha          #+#    #+#             */
/*   Updated: 2024/02/17 12:06:10 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if(N <= 0)
	{
		std::cout << "Invalid amount of Zombies" << std::endl;
		exit(0);
	}
	Zombie *zh = new Zombie[N];
	for(int i = 0; i < N; i++)
	{
		zh[i].setName(name);
		zh[i].announce();
	}
	return (zh);
}