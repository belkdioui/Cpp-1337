/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:44:46 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/11/04 17:33:51 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str="HI THIS IS BRAIN";
    std::string* stringPTR=&str;
    std::string& stringREF=str;

    std::cout << &str<<std::endl;
    std::cout << &stringPTR<<std::endl;
    std::cout << &stringREF<<std::endl;
    
    std::cout << str<<std::endl;
    std::cout << *stringPTR<<std::endl;
    std::cout << stringREF<<std::endl;  
}