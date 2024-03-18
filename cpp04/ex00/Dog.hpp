/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:13:01 by Famahsha          #+#    #+#             */
/*   Updated: 2024/03/16 12:22:50 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP


#include <iostream>
#include <string>

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		~Dog(void);

		void makeSound(void) const;
};

#endif