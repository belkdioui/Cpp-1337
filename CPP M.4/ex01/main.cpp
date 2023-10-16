/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 10:32:54 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/14 13:47:44 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
const WrongAnimal* meta = new WrongAnimal();
// const WrongAnimal* j = new Dog();
const WrongAnimal* i = new WrongCat();
// std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); 
// j->makeSound();
meta->makeSound();
return 0;
}