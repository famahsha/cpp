/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:32:15 by Famahsha          #+#    #+#             */
/*   Updated: 2024/03/07 21:09:52 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void )
{
    ScavTrap a1( "lion" );
    ScavTrap a2( a1 );

    a1.attack( "the cat" );
    a1.takeDamage( 10 );
    a1.beRepaired( 10 );
    a1.guardGate();

    return 0;
}