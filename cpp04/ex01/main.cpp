/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:17:35 by Famahsha          #+#    #+#             */
/*   Updated: 2024/03/16 15:17:23 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;//should not create a leak
delete i;
return 0;


//  Animal *array_animals[10];
//   for (int i = 0; i < 10; i++) {
//     if (i % 2)
//       array_animals[i] = new Dog();
//     else
//       array_animals[i] = new Cat();
//   }

//   for (int i = 0; i < 10; i++) delete array_animals[i];
}





// int main()
// {
// 	// TESTS FOR MEMORY LEAK
	// int n = 2;
	// int i = 0;
	// const Animal* animal[n];
	
	// while (i < n / 2)
	// {
	// 	animal[i] = new Dog();
	// 	i++;
	// }
	// while (i < n)
	// {
	// 	animal[i] = new Cat();
	// 	i++;
	// }
	
	// i = 0;
	// while (i < n)
	// {
	// 	delete animal[i];
	// 	i++;
	// }
		
	// return (0);
// }


// / TESTS FOR DEEP COPY vs SHALLOW COPY
	// Dog _dog = Dog();
	// Cat _cat = Cat();
	// Dog dog_copy = _dog;
	// Cat cat_copy = _cat;
	
	//SHALLOW COPY TEST	
	// WrongCat _wrongcat;
	// WrongCat _wrongcat_copy = _wrongcat;