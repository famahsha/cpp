/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:17:35 by Famahsha          #+#    #+#             */
/*   Updated: 2024/03/16 16:05:44 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
	// CORRECT IMPLEMENTATION OF ABSTRACT CLASSES
	AAnimal *a_1 = new Cat();
	AAnimal *a_2 = new Dog();
	
	a_1->makeSound();
	a_2->makeSound();
	
	// WRONG IMPLEMENTATION OF ABSTARCT CLASSES
	// AAnimal *_a = new AAnimal();
	// WrongAnimal *wa_1 = new WrongCat();
	
	delete a_1;
	delete a_2;

	// delete _a;
	// delete wa_1;

	return (0);
}