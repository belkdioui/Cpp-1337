/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 10:22:45 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/03 08:42:10 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie zombie;
    zombie.setZombie("Foo");
    zombie.announce();
    Zombie *kl = newZombie("zoo");
    kl->announce();
    delete kl;
    randomChump("badre");
}