/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:37:48 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/27 22:39:14 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBO_REQ_FORM_H
#define ROBO_REQ_FORM_H

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <exception>
#include <string>
#include <fstream>
#include "AForm.hpp"

#include "AForm.hpp"
class RobotomyRequestForm: public AForm
{
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        void execute(Bureaucrat const & executor) const;
        RobotomyRequestForm(const RobotomyRequestForm& obj);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);
        ~RobotomyRequestForm();
};

#endif