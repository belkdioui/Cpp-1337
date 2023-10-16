/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:53:48 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/14 09:28:31 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
    public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap& obj);
    FragTrap& operator=(const FragTrap& obj);
    ~FragTrap();
    void attack(const std::string& target);
    void highFivesGuys(void);
};

#endif