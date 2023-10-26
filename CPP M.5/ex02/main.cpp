/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:22:49 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/26 14:00:26 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>

int main()
{
    try
    {
    Bureaucrat oss("ossama",16);
    oss.increGrade();
    Form job1("job1",120,50);
    job1.beSigned(oss);
    oss.signForm(job1);
    }  
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
}