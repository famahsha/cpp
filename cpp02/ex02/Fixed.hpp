/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:34:07 by Famahsha          #+#    #+#             */
/*   Updated: 2024/03/01 15:58:23 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include<iostream>
#include<string>
#include <cmath>

class Fixed
{ 
	private:
		int value;
		static const int bit = 8;
	public:
		Fixed();
		Fixed(Fixed const &rhs);
		Fixed & operator = (Fixed const &rhs);
		~Fixed();
		Fixed(const int i);
		Fixed(const float f);
		float toFloat( void ) const;
		int toInt( void ) const;
		int getRawBits( void ) const;
		void setRawBits( int const raw );

		bool operator>( Fixed const & rhs) const;
		bool operator<( Fixed const & rhs) const;
		bool operator>=( Fixed const & rhs) const;
		bool operator<=( Fixed const & rhs) const;
		bool operator==( Fixed const & rhs) const;
		bool operator!=( Fixed const & rhs) const;

		Fixed operator+(const Fixed& rhs) const;
		Fixed operator-(const Fixed& rhs) const;
		Fixed operator*(const Fixed& rhs) const;
		Fixed operator/(const Fixed& rhs) const;

		
};

std::ostream    &operator<<(std::ostream &o, Fixed const &i);

# endif

