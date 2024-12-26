/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 14:41:43 by Famahsha          #+#    #+#             */
/*   Updated: 2024/06/11 13:31:03 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Default Constructor for Bureaucrat called" << std::endl;

}

Bureaucrat::Bureaucrat (const std::string& n,int grd): name(n),grade(grd)
{
	if(grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();	
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) :name(src.name), grade(src.grade)
{
	std::cout << "Copy constructor for Bureaucrat called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& rhs )
{
	if ( this != &rhs )
		grade = rhs.getGrade();
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	
}

std::string Bureaucrat::getName() const
{
	return (name);
}

int Bureaucrat::getGrade(void) const
{
	return (grade);
}


void	Bureaucrat::incrementGrade() {
	if (grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	grade--;
}

void	Bureaucrat::decrementGrade() {
	if (grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	grade++;
}

//to sign the form ,if grade is sufficient to sign the form
void	Bureaucrat::signForm( Form& form ) {
	try {
		form.beSigned( *this ); //TRIES TO SIGN FORM SIGN CURRENT BRCT
		std::cout << *this << " signed " << form.getName() << std::endl;
	}
	catch (Form::GradeTooLowException &e) {
		std::cout << name << "coulnd't sign" << form.getName() << "because" << e.what() << std::endl;
	}
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	if (rhs.getName() != "")
		o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;
	else
		o << "Error: Bureacrat must have a name"<< std::endl;
	return (o);
}