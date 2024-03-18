/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:50:49 by Famahsha          #+#    #+#             */
/*   Updated: 2024/03/16 14:17:40 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include "Brain.hpp"

class WrongCat : public WrongAnimal
{
	private:
		Brain* wrongcatbrain;
	public:
    	WrongCat( void );
		WrongCat(WrongCat const &src); // copy constructors
		WrongCat & operator=(WrongCat const & rhs); // copy assignnet operator overload
    	~WrongCat( void );

   		void   makeSound( void ) const;
};

#endif