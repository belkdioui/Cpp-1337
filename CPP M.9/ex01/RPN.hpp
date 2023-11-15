/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:33:26 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/11/14 14:17:40 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_H
#define RPN_H

#include <iostream>
#include <stack>
#include <sstream>

class RPN
{
    private:
        std::stack<std::string> st;
        RPN();
        RPN(const RPN& obj);
        RPN& operator=(const RPN& obj);
    
    public:
        RPN(std::string av);
        ~RPN();
    
};

#endif