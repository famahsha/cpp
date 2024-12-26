/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:24:36 by Famahsha          #+#    #+#             */
/*   Updated: 2024/07/09 13:24:37 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void)
{
	std::cout << "Default Constructor for Span called" << std::endl;
}

Span::Span(int num)
{
	std::cout << "Parameterized Constructor for Span called" << std::endl;
	if (num <= 0)
		n = 0;
	else
		n = num;
}

Span::Span(Span const &src)
{
	*this = src;
}

Span & Span::operator=(Span const & rhs)
{
	std::cout << "Copy assignment operator for Span called" << std::endl;
	this->n = rhs.n;
	return (*this);
}

Span::~Span(void)
{
	std::cout << "Destructor for Span class called" << std::endl;
}

void Span::addNumber(int numToAdd)
{
	// find length of the contaner and throw exception if length = this->size
	unsigned int size = nums.size();
	try
	{
		if (size == this->n)
			throw checkmaximum();
		else
			nums.push_back(numToAdd);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what();
	}
}

void Span::betterAddNumber(std::vector<int> vec)
{
	unsigned int size = nums.size();
	unsigned int vec_size = vec.size();
	if ((size + vec_size) > n)
		throw checkmaximum();
	nums.insert(nums.end(), vec.begin(), vec.end());
}

int Span::shortestSpan(void)
{
	// find the shortest span
	int size = nums.size();
	sort(nums.begin(), nums.end());
	// std::cout << "Size = " << size << std::endl;
	// int shortest_span = 0;
    int shortest_span = INT_MAX;
    for (int i = 0; i < size - 1; ++i) {
        int span = nums[i + 1] - nums[i];
        if (span < shortest_span) {
            shortest_span = span;
        }
    }
    return shortest_span;		
}

int Span::longestSpan(void)
{
	// find the longest span
	int size = nums.size();
	int longest_span = 0;
	sort(nums.begin(), nums.end());
	if (size > 1)
		longest_span = nums.at(size - 1) - nums.at(0);
	return(longest_span);
}
