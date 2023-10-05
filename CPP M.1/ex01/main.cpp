/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:27:21 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/04 16:21:38 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>

int main()
{
    Zombie *zz = zombieHorde( 10, "badre" );
    
    for(int i = 0;i<10;i++)
    {
        zz[i].announce();
    }
    // system("leaks moarBrainz");
    delete[]zz;
}