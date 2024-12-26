/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:47:11 by Famahsha          #+#    #+#             */
/*   Updated: 2024/07/15 12:47:12 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <cstdlib>
#include <limits>
#include <algorithm> 
#include "PmergeMe.hpp"

bool isSorted(int* array, int size) {
    for (int i = 0; i < size - 1; i++) {
        if (array[i] > array[i + 1])
            return false;
    }
    return true;
}

int main(int argc, char **argv) {
    if (argc < 2) {
        std::cout << "Usage: ./PmergeMe [num1] [num2] ... [numN]" << std::endl;
        return 1;
    }

    int size = argc - 1;
    int* array = new int[size];

    for (int i = 1; i < argc; i++) {
        double num = strtod(argv[i], NULL);
        if (num < std::numeric_limits<int>::min() || num > std::numeric_limits<int>::max()) {
            std::cout << "Error: Input is beyond integer range" << std::endl;
            delete[] array;
            return 1;
        }
        array[i - 1] = static_cast<int>(num);
    }

    if (isSorted(array, size)) {
        std::cout << "Error: Array is already sorted." << std::endl;
        delete[] array;
        return 1;
    }

    PmergeMe pmergeMe(array, size);

    // Perform sorting
    try {
        pmergeMe.sort();
    } catch (std::exception& error) {
        std::cout << error.what() << std::endl;
        delete[] array;
        return 1;
    }

    delete[] array;
    return 0;
}
// #include <string>
// #include <cstdlib>
// #include <limits>
// #include "PmergeMe.hpp"
// #include <set>
// #include <vector>
// #include <iostream>
// #include <limits>
// #include "PmergeMe.hpp"

// bool isSorted(int* array, int size) {
//     for (int i = 0; i < size - 1; i++) {
//         if (array[i] > array[i + 1])
//             return false;
//     }
//     return true;
// }

// int main(int argc, char **argv) {
//     if (argc < 2) {
//         std::cout << "Usage: ./PmergeMe [num1] [num2] ... [numN]" << std::endl;
//         return 1;
//     }

//     std::set<int> uniqueNumbers;
//     for (int i = 1; i < argc; i++) {
//         int num = std::atoi(argv[i]);
//         if (num < 0) {
//             std::cout << "Error: Negative numbers detected." << std::endl;
//             return 1;
//         }
//         uniqueNumbers.insert(num);
//     }

//     int size = uniqueNumbers.size();
//     // if (size < argc - 1) {
//     //     std::cout << "Error: Duplicate numbers detected." << std::endl;
//     //     return 1;
//     // }

//     int* array = new int[size];
//     std::copy(uniqueNumbers.begin(), uniqueNumbers.end(), array);

//     if (isSorted(array, size)) {
//         std::cout << "Error: Array is already sorted." << std::endl;
//         delete [] array;
//         return 1;
//     }

//     PmergeMe pmergeMe(array, size);

//     // Standard sort to check correctness
//     std::sort(array, array + size);

//     try {
//         pmergeMe.sort();
//     } catch (std::exception& error) {
//         std::cout << error.what() << std::endl;
//         delete [] array;
//         return 1;
//     }

//     delete [] array;
//     return 0;
// }
