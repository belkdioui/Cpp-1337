/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:01:28 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/16 15:10:23 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class Brain
{
    public:
    std::string ideas[100];
    Brain();
    // Brain(const Brain& obj);
    // Brain& operator=(const Brain& obj);
    ~Brain();
};



#endif