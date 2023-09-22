/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:26:27 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/09/22 11:28:43 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
private:
    std::string name;
public:
    Zombie(/* args */);
    ~Zombie();
    void announce(void);
    void setZombie(std::string name_zombie);
    std::string getZombie(void);
};

Zombie* zombieHorde( int N, std::string name );