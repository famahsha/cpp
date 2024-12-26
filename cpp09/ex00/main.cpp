/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:42:45 by Famahsha          #+#    #+#             */
/*   Updated: 2024/07/15 12:43:06 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


int main(int argc, char **argv)
{
	if (argc == 2)
	{
		BitcoinExchange RateBTC(argv[1]);
		return (0);
	}
	else
	{
		std::cout << "Argument is Invalid" << std::endl;
		return (1);
	}
	return (0);
}


// int main(int argc, char **argv)
// {
// 	if (argc != 2)
// 	{
// 		std::cout << "Error: could not open file."  << std::endl;
// 		return (0);
// 	}
// 	std::ifstream in(argv[1]);
// 	if (!in)
// 	{
// 		std::cout << "Error: File does not exist."  << std::endl;
// 		in.close();
// 		return (0);
// 	}
// 	in.close();
// 	BitcoinExchange btc;
	
// 	btc.take_input_calc(argv[1]);
// }