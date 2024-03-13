/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:42:01 by Famahsha          #+#    #+#             */
/*   Updated: 2024/02/10 17:45:07 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>

class Contact
{
	private:
		std::string firstname;
		std::string	lastname;
		std::string nickname;
		std::string phonenumber;
		std::string darksecret;
	public:
		void setcontact(std::string fname,std::string lname, std::string nname, std::string pnum, std::string dsec)
		{
			firstname = fname;
			lastname = lname;
			nickname = nname;
			phonenumber = pnum;
			darksecret = dsec;
		}
		
		
		std::string getfirstname();
		std::string	getlastname();
		std::string getnickname();
		std::string getphonenumber();
		std::string getdarksecret();
		
};

#endif



