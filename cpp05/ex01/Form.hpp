/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:02:03 by Famahsha          #+#    #+#             */
/*   Updated: 2024/06/11 14:25:36 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string   name;
		bool               	Signed;
		const int           gradeToSign;
		const int           gradeToExecute;

		Form(); //stops from using it without providing necessary details,objects of class form can be created only by derived class
	public:
		Form( const std::string& name, int gradeToSign );
		Form( const std::string& name, int gradeToSign, int gradeToExecute );
		Form( const Form& src );
		~Form();

		Form&   operator=( const Form& rhs );

		std::string getName() const;
		bool        getSigned() const;
		int         getGradeToSign() const;
		int         getGradeToExecute() const;

		void        beSigned( const Bureaucrat& bureaucrat );

		class GradeTooHighException : public std::exception {
			public:
			virtual const char* what() const throw() { return "Grade too high"; }
		};
		class GradeTooLowException : public std::exception {
			public:
			virtual const char* what() const throw() { return "Grade too low"; }
		};
};

std::ostream&   operator<<( std::ostream& o, const Form& rhs );

#endif