/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:04:54 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/11/10 11:29:05 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <iostream>
#include <stack>
#include <list>

template<class T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack():std::stack<T>(){};
        MutantStack(const MutantStack& obj):std::stack<T>(obj){};
        MutantStack& operator=(const MutantStack& obj)
        {
            std::stack<T>::operator=(obj);
            return *this;
        };
        ~MutantStack(){};
        // typedef typename std::deque<T>::iterator iterator;
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin(){ return this->c.begin();}
        iterator end(){ return this->c.end();}
        
};

#endif