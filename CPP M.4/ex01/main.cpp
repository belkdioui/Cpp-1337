/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 10:32:54 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/16 15:16:26 by bel-kdio         ###   ########.fr       */
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
    int n;
    do {
        std::cout<<"entre a size of the array positive number : "<<std::endl;
        std::cin>>n;
    }while (n <= 0);
    int i;
    Animal* array[n];
    for (i = 0; i < n; i++) {
        if(i < n / 2)
            array[i] = new Dog();
        else
            array[i] = new Cat();
    }
    for (i = 0; i < n; i++) {
        delete array[i];
    }
}

int main()
{
    man();
    system("leaks ex01");
    return 0;
}