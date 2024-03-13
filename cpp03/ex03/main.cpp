/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 10:30:15 by Famahsha          #+#    #+#             */
/*   Updated: 2024/03/08 13:15:00 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main( void )
{
    DiamondTrap a1( "lion" );
    DiamondTrap a2( a1 );
	
	
	a1.whoAmI();
	a2.whoAmI();
	
    a1.attack( "the cat" );
    a1.takeDamage( 10 );
    a1.beRepaired( 10 );
 

    return 0;
}