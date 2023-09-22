/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 10:22:45 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/09/22 11:08:28 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>

int main()
{
    Zombie zombie;
    zombie.setZombie("Foo");
    zombie.announce();
    Zombie *kl = newZombie("BAANNI");
    kl->announce();
    delete kl;
    randomChump("badre");
}