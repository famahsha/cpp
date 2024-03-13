/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:14:12 by Famahsha          #+#    #+#             */
/*   Updated: 2024/02/13 16:10:04 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

int main()
{
	PhoneBook book;
	std::string choice;
	int i;
	i = 0;
	
	while (1)
	{
		book.select();
		std::cin >> choice;
		if(choice == "ADD" || choice == "1")
		{
			book.add(i);
			i++;
		}
		else if (choice == "SEARCH" || choice == "2")
			book.search();
		else if (choice == "EXIT" || choice == "3")
			break ;
		else
			std::cout << "Invalid option. Please enter a valid option.\n";
		
		
	}
	return 0;
}
