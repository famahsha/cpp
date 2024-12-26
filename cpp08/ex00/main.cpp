/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:24:23 by Famahsha          #+#    #+#             */
/*   Updated: 2024/07/09 13:29:20 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main() {
    // Create an empty vector
    std::vector<int> vec;

    // Populate the vector with some values
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(7);
    vec.push_back(8);
    vec.push_back(9);
    vec.push_back(10);

    try {
        int value = 10;
        std::vector<int>::iterator it = easyfind(vec, value);
        std::cout << "Value " << value << " found at position " << std::distance(vec.begin(), it) << std::endl;

        value = 15;
        it = easyfind(vec, value);
        std::cout << "Value " << value << " found at position " << std::distance(vec.begin(), it) << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}