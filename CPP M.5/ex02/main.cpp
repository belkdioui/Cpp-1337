/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:22:49 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/11/02 19:28:02 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <exception>

int main()
{
    try
    {
    AForm *job1 = new ShrubberyCreationForm("badre");
    Bureaucrat oss("ossama",1);
    job1->beSigned(oss);
    oss.executeForm(*job1);
    // job1->execute(oss);
    // oss.signForm(job1);
    }  
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
}