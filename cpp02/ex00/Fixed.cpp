/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 13:56:45 by Famahsha          #+#    #+#             */
/*   Updated: 2024/03/01 15:26:44 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called " << std::endl;
	value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &other)
{
	std::cout << "Copy constructor called " << std::endl;
	*this = other;
}

Fixed & Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
	this->value = rhs.getRawBits();
	return(*this);  	
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called " << std::endl;
	return(this->value);
}


void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called " << std::endl;
	this->value = raw;
}