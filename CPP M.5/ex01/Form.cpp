/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 09:52:33 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/26 12:59:39 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form() : name(""), grade_s(150) , grade_e(50){};
Form::Form(std::string const Name, int Grade_s, int Grade_e) : name(Name) , signe(false) ,grade_s(Grade_s) , grade_e(Grade_e) 
{
    if (Grade_s < 1) 
        throw GradeTooHighException();
    else if (Grade_s > 150)
        throw GradeTooLowException();
    if (Grade_e < 1) 
        throw GradeTooHighException();
    else if (Grade_e > 150)
        throw GradeTooLowException();           
};
Form::~Form(){};
std::string const Form::getName() const {return name;};
int Form::getGrade_s() const {return grade_s;};
int Form::getGrade_e() const {return grade_e;};
bool Form::getSigne() const {return signe;};

void Form::beSigned(Bureaucrat& obj)
{
    if (obj.getGrade() <= this->grade_s) {
        this->signe = true;
    }
    else
        throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& output, const Form& obj)
{
    output<<obj.getName()<<", Form grade requierd"<<obj.getGrade_e() <<", Form grade sign"<<obj.getGrade_s()<<", is signed ?? "<<obj.getSigne();
    return output;
}