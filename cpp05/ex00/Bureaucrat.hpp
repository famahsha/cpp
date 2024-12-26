/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:02:20 by Famahsha          #+#    #+#             */
/*   Updated: 2024/06/11 12:45:07 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
    const std::string   name;
    int                 grade;

    Bureaucrat();
public:
    Bureaucrat( const std::string& n, int grd );
    Bureaucrat( const Bureaucrat& src );
    Bureaucrat& operator=( const Bureaucrat& rhs );
    ~Bureaucrat();

    std::string getName() const;
    int         getGrade() const;

    void        incrementGrade();
    void        decrementGrade();


    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char* what() const throw()
            { return "Grade too high"; }
    };
    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char* what() const throw()
            { return "Grade too low"; }
    };

};

std::ostream&   operator<<( std::ostream& o, const Bureaucrat& rhs );

#endif