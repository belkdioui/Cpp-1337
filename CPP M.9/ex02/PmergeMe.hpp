/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 09:19:00 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/11/21 11:51:21 by bel-kdio         ###   ########.fr       */
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
        void merge_insert_sort(std::deque<std::deque<int> >);
        std::deque<std::deque<int> >make_pairs(std::deque<int>&);
        void sort_pairs(std::deque<std::deque<int> > &);
        void copy_db_cont_to_one(std::deque<std::deque<int> >);
        int pairs_with_same_ele(std::deque<std::deque<int> >);
        void part_of_insertion(std::deque<std::deque<int> >&);
        void creat_main_and_pend(std::deque<std::deque<int> >&);
        void insert_pend_in_main(std::deque<std::deque<int> > &main_chaine,std::deque<std::deque<int> > &pend);
        ~PmergeMe();
    
    
    private:
        std::deque<int> all_num;
        std::deque<std::deque<int> > main_chaine;
        std::deque<std::deque<int> > pend;
        int size_of_ele;
        int save_odd;
        int number_of_comparaison;
        PmergeMe();
        PmergeMe(const PmergeMe& obj);
        PmergeMe operator=(const PmergeMe& obj);
};

#endif