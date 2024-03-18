/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:05:41 by Famahsha          #+#    #+#             */
/*   Updated: 2024/03/16 14:11:18 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP


#include <iostream>
#include <string>

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* catbrain;
	public:
		Cat();
		Cat(Cat const &src); // copy constructors
		Cat & operator=(Cat const & rhs); // copy assignnet operator overload
		~Cat(void);
		void makeSound(void) const;
};

#endif