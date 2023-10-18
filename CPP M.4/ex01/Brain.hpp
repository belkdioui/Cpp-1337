/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:01:28 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/18 18:24:58 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class Brain
{
    std::string ideas[100];
    public:
    Brain();
    Brain(const Brain& obj);
    Brain& operator=(const Brain& obj);
    ~Brain();
};



#endif