/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 13:12:46 by Famahsha          #+#    #+#             */
/*   Updated: 2024/06/20 13:21:13 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <string>

template<typename T>


T const& max(T const& x, T const& y)
{
	return (x > y) ? x : y ;
}


template<typename T>

T const& min(T const& a, T const& b)
{
	if (a > b)
		return (b);
	else
		return (a);
}

template<typename T>

void swap(T & a, T & b)
{
	T temp;

	temp = a;
	a = b;
	b = temp;
}

#endif