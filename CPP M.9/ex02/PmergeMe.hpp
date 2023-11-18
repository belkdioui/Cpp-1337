/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 09:19:00 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/11/18 15:24:47 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_H
#define PMERGEME_H
#include <deque>
#include <stdexcept>
#include <iostream>
#include <string>
#include <sstream>

class PmergeMe{
    public:
        PmergeMe(std::string range);
        void print_container(std::deque<int>::iterator first, std::deque<int>::iterator last);
        void merge_insert_sort(std::deque<int>::iterator it_b, std::deque<int>::iterator it_e, int mid);
        void merge_them(std::deque<int>::iterator it_b,std::deque<int>::iterator it_m,  std::deque<int>::iterator it_e);
        ~PmergeMe();
    
    private:
        std::deque<int> all_num;
        PmergeMe();
        PmergeMe(const PmergeMe& obj);
        PmergeMe operator=(const PmergeMe& obj);
};

#endif