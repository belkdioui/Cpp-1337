/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 09:57:21 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/04 10:27:49 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ZOMBIE_H
#define ZOMBIE_H
class Zombie
{
private:
    std::string name;
public:
    Zombie();
    ~Zombie();
    void announce(void);
    void setZombie(std::string name_zombie);
    std::string getZombie(void);
};

Zombie* newZombie(std::string name);
void    randomChump( std::string name );

#endif