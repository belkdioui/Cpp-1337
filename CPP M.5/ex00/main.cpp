/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:22:49 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/11/01 22:45:08 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <exception>

int main()
{
    try
    {
     Bureaucrat oss("ossama",1);
     oss.increGrade();
     std::cout<<oss<<std::endl;
    }  
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}