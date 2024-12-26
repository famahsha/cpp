/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:02:24 by Famahsha          #+#    #+#             */
/*   Updated: 2024/06/10 15:02:25 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat bureaucrat("John Doe", 1);
        std::cout << "Bureaucrat: " << bureaucrat << std::endl;
        
        bureaucrat.incrementGrade();
        std::cout << "After incrementing grade: " << bureaucrat << std::endl;
        bureaucrat.decrementGrade();

        std::cout << "After decrementing grade: " << bureaucrat << std::endl;
    }
    catch (const Bureaucrat::GradeTooHighException& e) {
        std::cerr << "Grade too high exception caught: " << e.what() << std::endl;
    }
    catch (const Bureaucrat::GradeTooLowException& e) {
        std::cerr << "Grade too low exception caught: " << e.what() << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}