/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:45:23 by Famahsha          #+#    #+#             */
/*   Updated: 2024/02/20 19:38:18 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main(int ac, char **av)
{
	Harl harl;

	if (ac !=2)
	{
		std::cout << "PLEASE ENTER A LEVEL | DEBUG | INFO | WARNING | ERROR |" << std::endl;
		return (0);
	}
	harl.complain(av[1]);
	
}
