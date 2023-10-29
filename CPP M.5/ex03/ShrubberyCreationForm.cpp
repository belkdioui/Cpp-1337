/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:48:57 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/27 19:51:31 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():AForm("", 145, 137){} 
ShrubberyCreationForm::ShrubberyCreationForm(std::string target):AForm(target, 145, 137){}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj):AForm(obj){};
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
    AForm::operator=(obj);
    return(*this);
}
void ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
        if (executor.getGrade() < this->getGrade_e() && this->getSigne()) 
        {
            std::ofstream on(this->getName() + "_shrubbery");
            on<<"        *        \n";
            on<<"       ***       \n";
            on<<"      *****      \n";
            on<<"     *******     \n";
            on<<"    ** ******    \n";
            on<<"   ******** **   \n";
            on<<"  ***** *******  \n";
            on<<" ** ********* ** \n";
            on<<"******** ********\n";
            on<<"       ****      \n";
            on<<"       ****      \n";
            on<<"       ****      ";
        }
        else {
        throw GradeTooLowException();
        }
}
ShrubberyCreationForm::~ShrubberyCreationForm(){};