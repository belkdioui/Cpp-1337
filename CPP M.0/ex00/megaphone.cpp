/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:13:48 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/09/25 09:37:45 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
    int i;
    int j;

    i = 1;
    if (ac <= 1)
        return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
    while (av[i])
    {
        std::string str(av[i]);
        j = -1;
        while (str[++j])
            str[j] = std::toupper(str[j]);
        std::cout << str;
        i++;
    }
    std::cout << std::endl;
    return (0);
}