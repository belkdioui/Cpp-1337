/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 10:32:54 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/18 19:32:38 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>

void man()
{
        Cat *c1 = new Cat();
    Cat *c2 = new Cat();
    *c1 = *c2;
    delete c1;
    delete c2;
    //   int n = 6;
    // int i;
    // Animal* array[n];
    // for (i = 0; i < n; i++) {
    //     if(i < n / 2)
    //         array[i] = new Dog();
    //     else
    //         array[i] = new Cat();
    // }
    // for (i = 0; i < n; i++) {
    //     delete array[i];
    // }
    // Animal *a;
    // Dog d;
    // a =&d;
    // d.makeSound();
}

int main()
{
    man();
    std::cout << std::endl;
    system("leaks ex02");
    return 0;
}