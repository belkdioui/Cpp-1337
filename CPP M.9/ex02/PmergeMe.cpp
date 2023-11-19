/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 09:46:04 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/11/19 19:31:22 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <cstddef>
#include <deque>
#include <iterator>
#include <ostream>
#include <stdexcept>


std::deque<std::deque<int> > PmergeMe::make_pairs(std::deque<int>& all_num)
{
    std::deque<std::deque<int> > pairs;
    for (std::deque<int>::iterator it_b = all_num.begin(); it_b != all_num.end(); std::advance(it_b, size_of_ele))
    {
        if (std::distance(it_b, all_num.end()) >= size_of_ele) {
            std::deque<int> pair(it_b, it_b + size_of_ele);
            pairs.push_back(pair);
        }
    }
    return pairs;
}

void PmergeMe::sort_pairs(std::deque<std::deque<int> > &pairs)
{
    int i = 0;
    for (std::deque<std::deque<int> >::iterator it_b= pairs.begin(); it_b != pairs.end() && static_cast<size_t>((i)+2) <= pairs.size() ; std::advance(it_b, 2))
    {
        if (it_b->back() > std::next(it_b)->back())
            std::swap(*(it_b), *std::next(it_b));
        i+=2;
    }
}

void PmergeMe::copy_db_cont_to_one(std::deque<std::deque<int> > pairs)
{
    all_num.clear();
    for (std::deque<std::deque<int> >::iterator it_b= pairs.begin(); it_b != pairs.end(); std::advance(it_b, 1))
    {
        for (std::deque<int>::iterator it_b1= it_b->begin(); it_b1 != it_b->end(); std::advance(it_b1, 1)) 
            all_num.push_back(*it_b1);
    }
    if (save_odd >= 0)
    {
        all_num.push_back(save_odd);
        save_odd = -1;
    }
}

int PmergeMe::pairs_with_same_ele(std::deque<std::deque<int> > pairs)
{
    int num_of_pairs = 0;

    for (std::deque<std::deque<int> >::iterator it_b= pairs.begin(); it_b != pairs.end() ; std::advance(it_b, 1))
    {
        if (it_b->size() == static_cast<size_t>(size_of_ele)) 
            num_of_pairs++;
    }
    return num_of_pairs;
}

void PmergeMe::creat_main_and_pend(std::deque<std::deque<int> > &pairs)
{
    std::deque<std::deque<int> > main_chaine;
    std::deque<std::deque<int> > pend;
    std::deque<std::deque<int> >::iterator it_b= pairs.begin();
    size_t index = 0;
    for (; it_b != pairs.end() && index != pairs.size(); std::advance(it_b, 1))
    {
        if(index == 0 || index == 1)
        {
            std::deque<int> pair(it_b->begin(), it_b->end());
            main_chaine.push_back(pair);
        }
        else if (index % 2 == 0){
            std::deque<int> pair(it_b->begin(), it_b->end());
            pend.push_back(pair);
        }
        else {
            std::deque<int> pair(it_b->begin(), it_b->end());
            main_chaine.push_back(pair);
        }
        index++;
    }

    
    std::cout<<"main_chaine : "<<std::endl;;
    for (std::deque<std::deque<int> >::iterator it_b= main_chaine.begin(); it_b != main_chaine.end(); std::advance(it_b, 1))
    {
        print_container(it_b->begin(), it_b->end());
    }
    std::cout<<std::endl;
    std::cout<<"pend : "<<std::endl;;
    for (std::deque<std::deque<int> >::iterator it_b= pend.begin(); it_b != pend.end(); std::advance(it_b, 1))
    {
        // std::cout<<"pend : ";
        print_container(it_b->begin(), it_b->end());
    }
    std::cout<<std::endl;
}

void PmergeMe::part_of_insertion(std::deque<std::deque<int> > &pairs)
{
    if (all_num.size() % 2 != 0)
    {
        save_odd = all_num.back();
        all_num.pop_back();
    }
    size_of_ele /= 2;
    pairs = make_pairs(all_num);
    for (std::deque<std::deque<int> >::iterator it_b= pairs.begin(); it_b != pairs.end(); std::advance(it_b, 1))
    {
        std::cout<<"pair before insertion : ";
       print_container(it_b->begin(), it_b->end());
    }
    creat_main_and_pend(pairs);
    
}

void PmergeMe::merge_insert_sort(std::deque<std::deque<int> > pairs)
{
    if (all_num.size() % 2 != 0)
    {
        save_odd = all_num.back();
        all_num.pop_back();
    }
    
    size_of_ele *= 2;
    pairs = make_pairs(all_num);
    for (std::deque<std::deque<int> >::iterator it_b= pairs.begin(); it_b != pairs.end(); std::advance(it_b, 1))
    {
        std::cout<<"pair before sorting : ";
        print_container(it_b->begin(), it_b->end());
    }
    std::cout<<std::endl;


    
    sort_pairs(pairs);

    
    for (std::deque<std::deque<int> >::iterator it_b= pairs.begin(); it_b != pairs.end(); std::advance(it_b, 1))
    {
        std::cout<<"pair after sorting : ";
       print_container(it_b->begin(), it_b->end());
    }
    std::cout<<std::endl;

    copy_db_cont_to_one(pairs);
    std::cout<<"all_num : ";
    print_container(all_num.begin(), all_num.end());

    if(pairs_with_same_ele(pairs) > 3)
        merge_insert_sort(pairs);
    part_of_insertion(pairs);
    
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
    size_of_ele = 1;
    save_odd = -1;
    std::deque<std::deque<int> > pairs;
    std::istringstream iss(range);
    int num;
    while(iss >> num)
        all_num.push_back(num);
    if(iss.eof() == num)
            throw std::runtime_error("Error");
    merge_insert_sort(pairs);
}

PmergeMe::~PmergeMe(){}