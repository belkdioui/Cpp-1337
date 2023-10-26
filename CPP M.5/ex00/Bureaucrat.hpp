/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:14:01 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/25 15:13:26 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <exception>
#include<iostream>


class Bureaucrat
{
    public:
        Bureaucrat();
        Bureaucrat(std::string const Name, int Grade);
        Bureaucrat(const Bureaucrat& obj);
        Bureaucrat& operator=(const Bureaucrat& obj);
        ~Bureaucrat();
        std::string const getName() const;
        int getGrade() const;
        class GradeTooHighException : public std::exception
        {
            public:
                const char * what() const throw()
                {return "grade too hight";} 
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char * what() const throw()
                {return "grade too Low";}
        };
        void increGrade();
        void decreGrade(); 
    private:
        std::string const name;
        int grade;
};

std::ostream& operator<<(std::ostream& output, const Bureaucrat& obj);

#endif