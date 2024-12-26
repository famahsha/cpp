/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:40:08 by Famahsha          #+#    #+#             */
/*   Updated: 2024/06/11 14:07:29 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
    const std::string   name;
    bool                Signed;
    const int           gradeToSign;
    const int           gradeToExecute;

   
	AForm();

public:
	AForm( const std::string& n, int grdToSign, int grdToExecute );
	AForm( const AForm& src );
	AForm&   operator=( const AForm& rhs );
	virtual    ~AForm();

    std::string getName() const;
    bool        getSigned() const;
    int         getGradeToSign() const;
    int         getGradeToExecute() const;

    void        beSigned( const Bureaucrat& bureaucrat );

    virtual void  execute( const Bureaucrat& executor ) const = 0;

    class GradeTooHighException : public std::exception {
        public:
            virtual const char* what() const throw() { return "Grade too high"; }
    };
    class GradeTooLowException : public std::exception {
        public:
            virtual const char* what() const throw() { return "Grade too low"; }
    };
    class NotSignedException : public std::exception {
        public:
            virtual const char* what() const throw() { return "Form not signed"; }
    };
};

std::ostream&   operator<<( std::ostream& o, const AForm& rhs );

#endif