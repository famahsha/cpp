/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:00:21 by Famahsha          #+#    #+#             */
/*   Updated: 2024/03/07 20:19:05 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

int main()
{
    
    ClapTrap claptrap("lion");
    claptrap.attack("cat");
   	claptrap.takeDamage(5);
	// claptrap.attack("cat");
	// claptrap.beRepaired(5);
    return 0;
}