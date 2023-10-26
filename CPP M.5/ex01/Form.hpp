/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:34:41 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/26 14:45:57 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include<iostream>
class Bureaucrat;
#include "Bureaucrat.hpp"


class Form
{
  public:
    Form();
    Form(std::string const Name, int Grade_s, int Grade_e);
    ~Form();
    std::string const getName() const;
    int getGrade_s() const;
    int getGrade_e() const;
    bool getSigne() const;
    void beSigned(Bureaucrat& obj);
    void signForm();
    class GradeTooHighException : public std::exception
        {
            public:
                const char * what() const throw()
                {return "grade too hight in form";} 
        };
      class GradeTooLowException : public std::exception
        {
            public:
                const char * what() const throw()
                {return "grade too Low in form";}
        };
  private:
    std::string const name;
    bool signe;
    int const grade_s;
    int const grade_e;
    
};

std::ostream& operator<<(std::ostream& output, const Form& obj);

#endif