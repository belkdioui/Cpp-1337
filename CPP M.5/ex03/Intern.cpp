/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 10:25:21 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/29 10:25:21 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"


Intern::Intern()
{}
Intern::Intern(const Intern &obj)
{(void) obj;}

Intern& Intern::operator=(const Intern &obj)
{(void) obj; return *this;}

Intern::~Intern(){};

AForm* Intern::makeForm(std::string name, std::string target)
{
  int i ;
  AForm *form=NULL;
  std::string NameForm[3]={"robotomy request", "shrubbery creation", "presidential pardon"};
  for(i = 0; i < 3 && NameForm[i]!=name ; i++)
  {}
  switch (i) {
  case 0:
    form = new RobotomyRequestForm(target);
    break;
  case 1:
    form = new ShrubberyCreationForm(target);
    break;
  case 2:
    form = new PresidentialPardonForm(target);
    break;
  default:
    std::cout<<"name form dosen't existe"<<std::endl;
    return(form);
  }
  std::cout<<"Intern creates"<<name<<std::endl;
  return form;
    
}