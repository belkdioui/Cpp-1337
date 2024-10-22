/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:11:54 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/29 10:13:15 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <cstdlib>

PresidentialPardonForm::PresidentialPardonForm():AForm( 25,"", 5){} 
PresidentialPardonForm::PresidentialPardonForm(std::string target):AForm( 25, target, 5){}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj):AForm(obj){};
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
    AForm::operator=(obj);
    return(*this);
}
void PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
        if (executor.getGrade() < this->getGrade_e() && this->getSigne()) 
        {
            std::cout<<this->getTarget()<<" has been pardoned by Zaphod Beeblebrox."<<std::endl;
        }
        else {
        throw GradeTooLowException();
        }
}
PresidentialPardonForm::~PresidentialPardonForm(){};