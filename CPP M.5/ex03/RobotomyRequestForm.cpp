/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 19:50:13 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/27 21:47:37 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm():AForm("", 72, 45){} 
RobotomyRequestForm::RobotomyRequestForm(std::string target):AForm(target, 72, 45){}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj):AForm(obj){};
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
    AForm::operator=(obj);
    return(*this);
}
void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
        if (executor.getGrade() < this->getGrade_e() && this->getSigne()) 
        {
            std::cout<<".....driiiiillll......."<<std::endl;
            if (rand() % 2 ) {
                std::cout<<this->getName()<<" has been robotomized successfully"<<std::endl;
            }
            else {
                std::cout<<this->getName()<<" robotomy failed"<<std::endl;
            }
        }
        else {
        throw GradeTooLowException();
        }
}
RobotomyRequestForm::~RobotomyRequestForm(){};