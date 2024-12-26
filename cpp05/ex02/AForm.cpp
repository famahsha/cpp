/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:40:12 by Famahsha          #+#    #+#             */
/*   Updated: 2024/06/10 14:40:13 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm( const std::string& n, int grdToSign, int grdToExecute ) : name(n), gradeToSign(grdToSign), gradeToExecute(grdToExecute) {
    if ( gradeToSign < 1 || gradeToExecute < 1 )
        throw AForm::GradeTooHighException();
    if ( gradeToSign > 150 || gradeToExecute > 150 )
        throw AForm::GradeTooLowException();
}

AForm::AForm( const AForm& src ) : name( src.getName() ), gradeToSign( src.getGradeToSign() ), gradeToExecute( src.getGradeToExecute() ) {}

AForm::~AForm() {}

AForm&   AForm::operator=( const AForm& rhs ) {
    if ( this != &rhs )
	{
        Signed = rhs.getSigned();
	}
    return *this;
}

std::string AForm::getName() const {
    return name;
}

bool   AForm::getSigned() const {
    return Signed;
}

int   AForm::getGradeToSign() const {
    return gradeToSign;
}

int   AForm::getGradeToExecute() const {
    return gradeToExecute;
}

void    AForm::beSigned(const Bureaucrat& bureaucrat) {
    if ( bureaucrat.getGrade() > gradeToSign ) {
        throw AForm::GradeTooLowException();
    }
    Signed = true;
}

std::ostream&   operator<<( std::ostream &o, const AForm& rhs ) {
    o << "------------- AForm Info -------------" << std::endl;
    o << "Form name: " << rhs.getName() << std::endl
      << "Grade to sign: " << rhs.getGradeToSign() << std::endl
      << "Grade to execute: " << rhs.getGradeToExecute() << std::endl;;
    return o;
}