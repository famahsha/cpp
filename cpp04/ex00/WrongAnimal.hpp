/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:47:41 by Famahsha          #+#    #+#             */
/*   Updated: 2024/03/16 13:09:25 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &src); // copy constructor
		WrongAnimal & operator=(WrongAnimal const & rhs); // copy assignmnt operator overload
		virtual ~WrongAnimal(void);

		std::string getType(void) const;
		void makeSound(void) const;
};

#endif 