/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:43:04 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/26 13:06:03 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name(""), grade(150){};
Bureaucrat::Bureaucrat(std::string const Name, int Grade) : name(Name)
{
    if (Grade < 1) 
        throw GradeTooHighException();
    else if (Grade > 150)
        throw GradeTooLowException();            
    grade = Grade;
};
Bureaucrat::Bureaucrat(const Bureaucrat& obj){ (void) obj; };
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj){ (void) obj; return *this;};
Bureaucrat::~Bureaucrat(){};
std::string const Bureaucrat::getName() const {return name;};
int Bureaucrat::getGrade() const {return grade;};
void Bureaucrat::increGrade()
{
    if (this->grade <= 1) 
        throw GradeTooHighException();
    else if (this->grade > 150)
        throw GradeTooLowException();
    else
        this->grade--;
}
void Bureaucrat::decreGrade()
{
    if (this->grade < 1) 
        throw GradeTooHighException();
    else if (this->grade >= 150)
        throw GradeTooLowException();
    else
        this->grade++;
}
std::ostream& operator<<(std::ostream& output, const Bureaucrat& obj)
{
    output<<obj.getName()<<", bureaucrat grade "<<obj.getGrade();
    return output;
}
void Bureaucrat::signForm(Form& obj)
{
    if(obj.getSigne())
        std::cout<< getName() <<" signed "<<obj.getName();
    else
        std::cout<< getName() <<" couldn’t sign "<<obj.getName()<<" because the grade of beraucrat is lower than the personel "<<std::endl;
}