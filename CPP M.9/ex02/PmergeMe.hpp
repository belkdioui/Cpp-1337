/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 09:19:00 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/11/24 15:14:31 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_H
#define PMERGEME_H
#include <vector>
#include <stdexcept>
#include <list>
#include <iostream>
#include <string>
#include <sstream>
#include <utility>
#include <algorithm>
#include <cstddef>
#include <iterator>
#include <sys/time.h>
#include <iomanip>


typedef std::vector<std::vector<int> > vect_vect_int ;
typedef std::vector<int>::iterator vect_int_iter ;
typedef std::vector<std::vector<int> >::iterator vect_vect_int_iter ;
typedef std::vector<int> vect_int;
typedef std::vector<std::pair<std::vector<int>, vect_vect_int_iter> > vect_pair ;

typedef std::list<std::list<int> > list_list_int ;
typedef std::list<int>::iterator list_int_iter ;
typedef std::list<std::list<int> >::iterator list_list_int_iter ;
typedef std::list<int> list_int;
typedef std::list<std::pair<std::list<int>, list_list_int_iter> > list_pair ;

class PmergeMe{
    public:
        //******************************* Vector ******************************//
        void print_pend_vect();
        void print_mainchain_vect();
        void print_container_vect(vect_int_iter first, vect_int_iter last);
        void print_pairs_vect(vect_vect_int pairs);
        void merge_insert_sort_vect(int depth, vect_vect_int);
        vect_vect_int make_pairs_vect(vect_int&);
        void sort_pairs_vect(vect_vect_int &);
        void copy_db_cont_to_one_vect(vect_vect_int);
        int pairs_with_same_ele_vect(vect_vect_int);
        void part_of_insertion_vect(vect_vect_int&);
        void creat_main_and_pend_vect(vect_vect_int&);
        void insert_pend_in_main_vect();
        void update_iter_vect(vect_vect_int_iter pos);
        void part_of_vect(std::string range);
        //******************************* List ******************************//
        void print_pend_list();
        void print_mainchain_list();
        void print_container_list(list_int_iter first, list_int_iter last);
        void merge_insert_sort_list(int depth, list_list_int);
        list_list_int make_pairs_list(list_int&);
        void sort_pairs_list(list_list_int &);
        void copy_db_cont_to_one_list(list_list_int);
        int pairs_with_same_ele_list(list_list_int);
        void part_of_insertion_list(list_list_int&);
        void creat_main_and_pend_list(list_list_int&);
        void insert_pend_in_main_list();
        void update_iter_list(list_list_int_iter pos);
        void print_pairs_list(list_list_int pairs);
        void part_of_list(std::string range);
        // ******************************* commun ******************************//
        PmergeMe(std::string range);
        ~PmergeMe();

    
    
    private:
    
        //******************************* Vector ******************************//
        vect_int all_num_vect;
        vect_vect_int main_chaine_vect;
        vect_pair pend_vect;
        int size_of_ele_vect;
        int save_odd_vect;
        // ******************************* List ******************************//
        list_int all_num_list;
        list_list_int main_chaine_list;
        list_pair pend_list;
        int size_of_ele_list;
        int save_odd_list;
        // ******************************* commun ******************************//

        PmergeMe();
        PmergeMe(const PmergeMe& obj);
        PmergeMe operator=(const PmergeMe& obj);
};

#endif