/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:40:50 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/27 19:51:39 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUB_CREA_FORM_H
#define SHRUB_CREA_FORM_H

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <exception>
#include <string>
#include <fstream>
#include "AForm.hpp"
class ShrubberyCreationForm: public AForm
{
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        void execute(Bureaucrat const & executor) const;
        ShrubberyCreationForm(const ShrubberyCreationForm& obj);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);
        ~ShrubberyCreationForm();
};

#endif