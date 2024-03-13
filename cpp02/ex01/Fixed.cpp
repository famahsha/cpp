/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 16:00:05 by Famahsha          #+#    #+#             */
/*   Updated: 2024/03/01 16:05:44 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "default constructor called " << std::endl;
	value = 0;
}

Fixed::~Fixed()
{
	std::cout << "default destructor called " << std::endl;
}

Fixed::Fixed(Fixed const &other)
{
	std::cout << "Copy constructor called " << std::endl;
	*this = other;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called " << std::endl;
	this->value = i << this->bit;   // in this case 256
}


Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called " << std::endl;
	this->value = roundf(f * (1 << this->bit)); // Convert the floating-point number to a fixed-point value
}

int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called " << std::endl;
	return(this->value);
}


void Fixed::setRawBits( int const raw )
{
	// std::cout << "setRawBits member function called " << std::endl;
	this->value = raw;
}


Fixed & Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->value = rhs.getRawBits();
	return(*this);  	
}

float Fixed::toFloat(void) const
{
	return (float(value) / float(1 << bit));
}

int Fixed::toInt(void) const
{
	return (value >> bit);
}

std::ostream &operator<<(std::ostream &o, const Fixed &i)
{
    o << i.toFloat(); // Output the floating-point representation of the fixed-point number
    return o;
}
