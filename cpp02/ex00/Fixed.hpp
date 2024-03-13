/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 13:24:10 by Famahsha          #+#    #+#             */
/*   Updated: 2024/02/29 14:51:25 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP

#include<iostream>
#include<string>

class Fixed
{
	private:
		int value;
		static const int bit = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &other);
		Fixed & operator = (Fixed const &rhs);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};


# endif

