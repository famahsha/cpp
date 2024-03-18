/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:05:41 by Famahsha          #+#    #+#             */
/*   Updated: 2024/03/16 12:22:37 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP


#include <iostream>
#include <string>

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		~Cat(void);

		void makeSound(void) const;
};

#endif