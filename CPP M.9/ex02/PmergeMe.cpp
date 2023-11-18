/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 09:46:04 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/11/18 17:52:18 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <deque>
#include <stdexcept>

void PmergeMe::merge_them(std::deque<int>::iterator it_b,std::deque<int>::iterator it_m,  std::deque<int>::iterator it_e)
{
    std::deque<int> tempDeque;
    std::deque<int>::iterator left = it_b;
    std::deque<int>::iterator right = it_m;

    while (left < it_m && right < it_e) {
        if (*left < *right) {
            tempDeque.push_back(*left);
            ++left;
        } else {
            tempDeque.push_back(*right);
            ++right;
        }
    }
    tempDeque.insert(tempDeque.end(), left, it_m);
    tempDeque.insert(tempDeque.end(), right, it_e);
    std::copy(tempDeque.begin(), tempDeque.end(), it_b);
}

void PmergeMe::merge_insert_sort(std::deque<int>::iterator it_b, std::deque<int>::iterator it_e, int mid)
{
    mid = it_e - it_b;
    mid /= 2;
    if (mid == 0)
        return ;
        
    merge_insert_sort(it_b, it_b + mid, mid);
    merge_insert_sort(it_b + mid, it_e, mid);
    merge_them(it_b, it_b+mid, it_e);
    print_container(it_b, it_e);

}

void PmergeMe::print_container(std::deque<int>::iterator first, std::deque<int>::iterator last)
{
    for (; first != last; first++) {
        std::cout<<*first<<" ";
    }
    std::cout<<std::endl;
}

PmergeMe::PmergeMe(std::string range)
{
    std::istringstream iss(range);
    int num;
    while(iss >> num)
        all_num.push_back(num);
    if(iss.eof() == num)
            throw std::runtime_error("Error");
    merge_insert_sort(all_num.begin(), all_num.end(), 0);
}

PmergeMe::~PmergeMe(){}