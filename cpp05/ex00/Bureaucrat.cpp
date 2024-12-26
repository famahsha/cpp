/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 14:41:43 by Famahsha          #+#    #+#             */
/*   Updated: 2024/06/06 15:43:45 by Famahsha         ###   ########.fr       */
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

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	if (rhs.getName() != "")
		o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;
	else
		o << "Error: Bureacrat must have a name"<< std::endl;
	return (o);
}