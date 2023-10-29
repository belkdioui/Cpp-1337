/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:22:49 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/28 23:21:53 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <exception>
#include "Intern.hpp"

int main()
{
    Intern someRandomIntern;
    AForm* rrf;
    Bureaucrat corr("mosa7i7", 1);
    try
    {
        rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
        corr.signForm(*rrf);
        corr.executeForm(*rrf);
    }  
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
}