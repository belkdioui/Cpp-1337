/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:05:47 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/11/07 15:13:39 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <stdexcept>

template <typename T>
class Array
{
    public:
        Array():arr(NULL), size(0){}
        Array(unsigned int n):size(n)
        {
            arr = new T[n]();
        }
        Array(Array& obj)
        {
            arr = new T[obj.size]();
            *this = obj;
        }
        Array& operator=(Array& obj)
        {
            for (unsigned int i = 0; i < obj.size; i++) {
              this->arr[i] = obj.arr[i];  
            }
            return *this;
        }
        
        ~Array() {
            delete[] arr;
        }

        int get_size() {return size;}

         T& operator[](unsigned int index)
         {
            if (index >= size)
                throw std::out_of_range("Index out of range");
            return arr[index];
         }

    private:
        T *arr;
        unsigned int size;
    
};

#endif