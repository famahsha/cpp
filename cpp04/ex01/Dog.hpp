/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:13:01 by Famahsha          #+#    #+#             */
/*   Updated: 2024/03/16 14:14:02 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP


#include <iostream>
#include <string>

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* Dogbrain;
	public:
		Dog();
		Dog(Dog const &src); // copy constructors
		Dog & operator=(Dog const & rhs); // copy assignnet operator overload
		~Dog(void);
		void makeSound(void) const;
};

#endif