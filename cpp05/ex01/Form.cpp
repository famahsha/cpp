/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:01:57 by Famahsha          #+#    #+#             */
/*   Updated: 2024/06/10 15:01:58 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( const std::string& n, int grdToSign, int grdToExecute ) : name( n ), gradeToSign( grdToSign ), gradeToExecute(grdToExecute ) {
    if ( gradeToSign < 1 )
        throw Form::GradeTooHighException();
    if ( gradeToSign > 150 )
        throw Form::GradeTooLowException();
}

Form::Form( const Form& src ) : name( src.getName() ), gradeToSign( src.getGradeToSign() ), gradeToExecute( src.getGradeToExecute() )
{}


Form::~Form() {}

Form&   Form::operator=( const Form& rhs ) {
    if ( this != &rhs )
        Signed = rhs.getSigned();
    return *this;
}

std::string Form::getName() const {
    return name;
}

bool   Form::getSigned() const {
    return Signed;
}

int   Form::getGradeToSign() const {
    return gradeToSign;
}

int   Form::getGradeToExecute() const {
    return gradeToExecute;
}
//to change the sign status based on the grade of bureaucrat
void    Form::beSigned(const Bureaucrat& bureaucrat) {
    if ( bureaucrat.getGrade() > gradeToSign )
        throw Form::GradeTooLowException();
    Signed = true;
}

std::ostream&   operator<<( std::ostream& o, const Form& rhs ) {
    o << "------------- Form Info -------------" << std::endl;
    o << "Form name: " << rhs.getName() << std::endl
      << "Grade to sign: " << rhs.getGradeToSign() << std::endl
      << "Grade to execute: " << rhs.getGradeToExecute();
    return o;
}