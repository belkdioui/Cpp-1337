/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:09:23 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/16 16:11:26 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout<<"Brain contructor called"<<std::endl;
}

Brain::Brain(const Brain& obj)
{
    *this = obj;
    std::cout<<"copy constructor called in brain"<<std::endl;
}
Brain& Brain::operator =(const Brain& obj)
{
    std::cout<<"copy assignement operator called in brain"<<std::endl;
    return *this;
}

Brain::~Brain()
{
    std::cout<<"deconstructor called in brain"<<std::endl;
}