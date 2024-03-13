/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:30:47 by Famahsha          #+#    #+#             */
/*   Updated: 2024/02/13 15:42:38 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip> 

class PhoneBook
{
	private:
	 Contact contacts[8];
	 int currentindex;
	 
	public:
		 PhoneBook() : currentindex(0) {}
		void select();
		void add(int i);
		void search();
		void exit();
		void displaydetails(int index);
	
};


#endif

