/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 10:30:15 by Famahsha          #+#    #+#             */
/*   Updated: 2024/03/08 11:47:13 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main( void )
{
    FragTrap a1( "lion" );
    FragTrap a2( a1 );

    a1.attack( "the cat" );
    a1.takeDamage( 10 );
    // a1.beRepaired( 10 );
    a1.highFivesGuys();

    return 0;
}