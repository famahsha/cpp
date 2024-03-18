/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 11:51:32 by Famahsha          #+#    #+#             */
/*   Updated: 2024/03/16 15:49:36 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include<iostream>
#include<string>

class AAnimal
{
	protected:
		std::string type;
	public:
	  	AAnimal();
		AAnimal(AAnimal const &src);
		AAnimal & operator=(AAnimal const & rhs);
		virtual ~AAnimal(void);
		std::string getType(void) const;
		virtual void makeSound(void) const = 0;
};

#endif