/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:24:30 by Famahsha          #+#    #+#             */
/*   Updated: 2024/07/09 13:24:31 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int main()
{
    // try {
        Span sp(5);
    //     sp.addNumber(6);
    //     sp.addNumber(3);
    //     sp.addNumber(17);
    //     sp.addNumber(9);
    //     sp.addNumber(11);
    //     std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
    //     std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
    // } catch (const std::exception &e) {
    //     std::cerr << e.what() << std::endl;
    // }

    std::vector<int> vec;
	vec.push_back(6);
	vec.push_back(3);
	vec.push_back(17);
	vec.push_back(9);
	vec.push_back(11);
	
	try
	{
		sp.betterAddNumber(vec);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what();
	}

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	return 0;
}