/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:34:41 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/11/02 19:24:54 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
#define AFORM_H

#include<iostream>
class Bureaucrat;
#include "Bureaucrat.hpp"


class AForm
{
  public:
    AForm();
    AForm(std::string const Name, int Grade_s, int Grade_e);
    AForm(int Grade_s, std::string const target, int Grade_e);
    AForm(std::string name, std::string target);
    AForm(const AForm& obj);
    AForm& operator=(const AForm& obj);
    virtual ~AForm();
    std::string const getName() const;
    std::string const getTarget() const;
    int getGrade_s() const;
    int getGrade_e() const;
    bool getSigne() const;
    void beSigned(Bureaucrat& obj);
    virtual void execute(Bureaucrat const & executor) const = 0 ;
    class GradeTooHighException : public std::exception
        {
            public:
                const char * what() const throw()
                {return "grade too hight in AForm";} 
        };
      class GradeTooLowException : public std::exception
        {
            public:
                const char * what() const throw()
                {return "grade too Low in AForm";}
        };
  private:
    std::string const name;
    std::string const target;
    bool signe;
    int const grade_s;
    int const grade_e;
    
};

std::ostream& operator<<(std::ostream& output, const AForm& obj);

#endif