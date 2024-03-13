/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:41:38 by Famahsha          #+#    #+#             */
/*   Updated: 2024/02/13 16:11:52 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

void PhoneBook::select()
{

	std::cout << ".....Please select options....." << std::endl;
	std::cout << " 1---ADD " << std::endl;
	std::cout << " 2---SEARCH " << std::endl;
	std::cout << " 3---EXIT " << std::endl;
	
}

void PhoneBook::add(int i)
{
	std::string column[5];
	
	std::cin.ignore();
	std::cout << "enter first name :";
	std::getline(std::cin, column[0]);
	while (column[0].empty())
	{
		std::cout << " field cannot be empty .fill the  field " << std::endl;
		std::getline(std::cin, column[0]);
	}
	std::cout << "enter last name :";
	std::getline(std::cin,column[1]);
	while (column[1].empty())
	{
		std::cout << " field cannot be empty .fill the  field " << std::endl;
		std::getline(std::cin, column[1]);
	}
	std::cout << "enter nick name : " ;
	std::getline(std::cin ,column[2]);
	while (column[2].empty())
	{
		std::cout << " field cannot be empty .fill the  field " << std::endl;
		std::getline(std::cin, column[2]);
	}
	std::cout << "enter phone number : ";
	std::getline(std::cin,column[3]);
	while (column[3].empty())
	{
		std::cout << " field cannot be empty .fill the  field " << std::endl;
		std::getline(std::cin, column[3]);
	}
	std::cout << "enter darkest secret : ";
	std::getline(std::cin ,column[4]);
	while (column[4].empty())
	{
		std::cout << " field cannot be empty .fill the  field " << std::endl;
		std::getline(std::cin, column[4]);
	}
	
	if (i > 7 )
	 {
		std::cout << "phonebook is full.Repalcing the oldest contact " << std::endl;
		contacts[i % 8].setcontact(column[0], column[1], column[2], column[3], column[4]);
		// for (int i = 0; i < 7; ++i)
		// {
		//  contacts[i] = contacts[i + 7];
		// }
		// contacts[currentindex].setcontact(column[0], column[1], column[2], column[3], column[4]);
	 }
	 else
	 {
        contacts[currentindex].setcontact(column[0], column[1], column[2], column[3], column[4]);
        currentindex++;
    }
}

void PhoneBook::search()
{
    int index;
    char choice;

    std::string user_input;
    while (true)
    {
        std::cout << std::setw(10) << std::right << "INDEX" << " | "
                  << std::setw(10) << std::right << "FIRSTNAME" << " | "
                  << std::setw(10) << std::right << "LASTNAME" << " | "
                  << std::setw(10) << std::right << "NICKNAME" << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;
        for (int i = 0; i < currentindex; i++)
        {
            std::string first_name = contacts[i].getfirstname();
            std::string last_name = contacts[i].getlastname();
            std::string nickname = contacts[i].getnickname();
            if (first_name.length() > 9) {
                first_name = first_name.substr(0, 9) + ".";
            }
            if (last_name.length() > 9) {
                last_name = last_name.substr(0, 9) + ".";
            }
            if (nickname.length() > 9) {
                nickname = nickname.substr(0, 9) + ".";
            }
            std::cout << std::setw(10) << std::right << i << " | "
                      << std::setw(10) << std::right << first_name << " | "
                      << std::setw(10) << std::right << last_name << " | "
                      << std::setw(10) << std::right << nickname << std::endl;

        }
        std::cout << "Enter the index to display details (or enter -1 to go back): ";
        std::cin >> user_input;

        if (user_input == "-1") {
            break;
		}
        if (user_input.length() > 1 || !std::isdigit(user_input[0]) 
            || (user_input[0] - '0') >= currentindex || (user_input[0] - '0') < 0)
        {
            std::cout << "********Invalid index. Please enter a valid index******" << std::endl;
            continue;
        }
        index = user_input[0] - '0';
        displaydetails(index);
        std::cout << "Press B or b to go back to the main menu or any other key to return to the previous menu..." << std::endl;
        std::cin >> choice;
        if (choice == 'B' || choice == 'b')
            break;
        else
            std::cout << "Please select an index..." << std::endl;
    }
}


void PhoneBook::displaydetails(int index)
{
	std::string back;

    std::cout << "Contact details for index " << index << ":" << std::endl;
    std::cout << "Firstname: " << contacts[index].getfirstname() << std::endl;
    std::cout << "Lastname: " << contacts[index].getlastname() << std::endl;
    std::cout << "Nickname: " << contacts[index].getnickname() << std::endl;
	std::cout << "Phonenumber: " << contacts[index].getphonenumber() << std::endl;
	std::cout << "Darksecret: " << contacts[index].getdarksecret() << std::endl;
}
