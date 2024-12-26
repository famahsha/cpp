/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:39:38 by Famahsha          #+#    #+#             */
/*   Updated: 2024/06/10 14:44:26 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm {

private:
    const std::string   _target;

    ShrubberyCreationForm();

public:
    ShrubberyCreationForm( const std::string& target );
    ShrubberyCreationForm( const ShrubberyCreationForm& src );
    ~ShrubberyCreationForm();

    ShrubberyCreationForm&  operator=( ShrubberyCreationForm& rhs );

    void        execute( const Bureaucrat& executor ) const;

};

#endif 