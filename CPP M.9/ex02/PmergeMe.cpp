/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 09:46:04 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/11/25 10:27:21 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <cctype>
#include <stdexcept>
#include <string>

//*******************************************************************************//
//*******************************        Vector    ******************************//
//*******************************************************************************//

template <typename Iterator>
Iterator my_next(Iterator it) {
    std::advance(it, 1);
    return it;
}

template <typename Iterator>
Iterator my_prev(Iterator it) {
    std::advance(it, -1);
    return it;
}


int number_of_comparaison_vect = 0;

void    PmergeMe::print_pend_vect()
{
    std::cout<<"pend : "<<std::endl;;
    for (vect_pair::iterator it = pend_vect.begin(); it != pend_vect.end(); std::advance(it, 1))
    {
        std::cout<<"first : ";
        print_container_vect(it->first.begin(), it->first.end());
        std::cout<<"second : ";
        if(it->second == main_chaine_vect.end())
            std::cout<<"end"<<std::endl;
        else
            print_container_vect(it->second->begin(), it->second->end());
    }
    std::cout<<std::endl;
}

void PmergeMe::print_container_vect(vect_int_iter first, vect_int_iter last)
{
    for (; first != last; ++first) {
        std::cout<<*first<<" ";
    }
    std::cout<<std::endl;
}

void PmergeMe::print_pairs_vect(vect_vect_int pairs)
{
    std::cout<<"pairs : "<<std::endl;
    for (vect_vect_int_iter it_b= pairs.begin(); it_b != pairs.end(); std::advance(it_b, 1))
       print_container_vect(it_b->begin(), it_b->end());
    std::cout<<std::endl;
}

void    PmergeMe::print_mainchain_vect()
{
    std::cout<<"main_chaine : "<<std::endl;;
    for (vect_vect_int_iter it_b= main_chaine_vect.begin(); it_b != main_chaine_vect.end(); std::advance(it_b, 1))
    {
        print_container_vect(it_b->begin(), it_b->end());
    }
    std::cout<<std::endl;
}

int cal_size_vect(vect_int_iter first, vect_int_iter last)
{
    int index = 0;
    for (; first != last; ++first)
        index++;
    return(index);
}

void is_sorted_vect(vect_int_iter first, vect_int_iter last, size_t size)
{
    size_t s = cal_size_vect(first, last);
    if(s != size)
    {
        std::cout<<"size deff"<<std::endl;
        return;
    }
    for (; first != last - 1 ; ++first)
    {
        if(*first > *my_next(first))
        {
            std::cout<<"\nNO"<<std::endl;
            return;
        }
    }
    std::cout<<"\nYES"<<std::endl;
}

vect_vect_int PmergeMe::make_pairs_vect(vect_int& all_num)
{
    vect_vect_int pairs;
    vect_int_iter it_b = all_num.begin();
    for (; std::distance(it_b, all_num.end()) >= size_of_ele_vect; std::advance(it_b, size_of_ele_vect))
    {
        if (std::distance(it_b, all_num.end()) >= size_of_ele_vect)
        {
            vect_int pair(it_b, it_b + size_of_ele_vect);
            pairs.push_back(pair);
        }
    }
    if (it_b != all_num.end())
    {
        vect_int pair(it_b, all_num.end());
        pairs.push_back(pair);
    }
    return pairs;
}

void PmergeMe::sort_pairs_vect(vect_vect_int &pairs)
{
    for (vect_vect_int_iter it_b= pairs.begin(); std::distance(it_b, pairs.end()) >= 2; std::advance(it_b, 2))
    {
            number_of_comparaison_vect ++;
        if (it_b->back() > my_next(it_b)->back() && cal_size_vect(it_b->begin(), it_b->end()) == cal_size_vect(my_next(it_b)->begin(), my_next(it_b)->end()))
        {
            std::swap(*(it_b), *my_next(it_b));
        }
    }
}

void PmergeMe::copy_db_cont_to_one_vect(vect_vect_int pairs)
{
    all_num_vect.clear();
    for (vect_vect_int_iter it_b= pairs.begin(); it_b != pairs.end(); std::advance(it_b, 1))
    {
        for (vect_int_iter it_b1= it_b->begin(); it_b1 != it_b->end(); std::advance(it_b1, 1)) 
            all_num_vect.push_back(*it_b1);
    }
    if (save_odd_vect >= 0)
    {
        all_num_vect.push_back(save_odd_vect);
        save_odd_vect = -1;
    }
}

int PmergeMe::pairs_with_same_ele_vect(vect_vect_int pairs)
{
    int num_of_pairs = 0;

    for (vect_vect_int_iter it_b= pairs.begin(); it_b != pairs.end() ; std::advance(it_b, 1))
    {
        if (it_b->size() * 2 == static_cast<size_t>(size_of_ele_vect)) 
            num_of_pairs++;
    }
    return num_of_pairs;
}

bool compareBack_vect(const vect_int& a, const int& b) 
{
    number_of_comparaison_vect++;
    return a.back() <= b;
}

void PmergeMe::update_iter_vect(vect_vect_int_iter pos)
{
    for (vect_pair::iterator it_b = pend_vect.begin(); it_b != pend_vect.end(); it_b++)
    {
        if(it_b->second >= pos)
            ++it_b->second;
    }
}

void PmergeMe::creat_main_and_pend_vect(vect_vect_int &pairs)
{   
    std::pair<std::vector<int>, vect_vect_int_iter> pair;
    vect_vect_int_iter it_b = pairs.begin();
    vect_vect_int_iter sv_iter;
    pend_vect.clear();
    main_chaine_vect.clear();
    main_chaine_vect.reserve(pairs.size());
    pend_vect.reserve(pairs.size());

    main_chaine_vect.insert(main_chaine_vect.end(), *it_b);
    ++it_b;
    if(pairs.end() != it_b)
    {
        main_chaine_vect.insert(main_chaine_vect.end(), *it_b);
        ++it_b;
    }
    for (; it_b != pairs.end(); ++it_b)
    {
        sv_iter = main_chaine_vect.end();
        pair.first = *it_b;
        if (static_cast<size_t>(size_of_ele_vect) == it_b->size() && my_next(it_b) != pairs.end())
        {
            ++it_b;
            sv_iter = main_chaine_vect.insert(main_chaine_vect.end(), *it_b);
        }
        pair.second = sv_iter;
        pend_vect.push_back(pair);
    }
}

void PmergeMe::insert_pend_in_main_vect()
{   
    vect_pair::iterator it_b = pend_vect.begin();
    vect_pair::iterator save_erase;
    vect_vect_int_iter pos;
    vect_vect_int_iter it_b_m;
    vect_pair::iterator start;
    vect_pair::iterator end;
    int idx = 0;
    long int jacob_stl[] = {
        2, 2, 6, 10, 22, 42, 86, 170, 342, 682, 1366,
        2730, 5462, 10922, 21846, 43690, 87382, 174762, 349526, 699050,
        1398102, 2796202, 5592406, 11184810, 22369622, 44739242, 89478486,
        178956970, 357913942, 715827882, 1431655766, 2863311530, 5726623062,
        11453246122, 22906492246, 45812984490
    };
    
    while (it_b != pend_vect.end()) 
    {
        start = pend_vect.begin();
        end = pend_vect.begin();
        for (int i = 0; i < jacob_stl[idx] - 1 && start != pend_vect.end(); ++i)
			++start;
		if (start == pend_vect.end())
			--start;
        while(true)
        {
            if (main_chaine_vect.front().size() == start->first.size())
            {
                it_b_m = std::lower_bound(main_chaine_vect.begin(), start->second, start->first.back(), compareBack_vect);
                pos = main_chaine_vect.insert(it_b_m, start->first);
                pend_vect.erase(start);
                update_iter_vect(pos); 
            }
            else
            {
                main_chaine_vect.insert(main_chaine_vect.end(), start->first);
                pend_vect.erase(start);
            }
            if (start == end)
				break ;
			--start;
        }
        idx++;
    }
}

void PmergeMe::part_of_insertion_vect(vect_vect_int &pairs)
{
    if (all_num_vect.size() % 2 != 0)
    {
        save_odd_vect = all_num_vect.back();
        all_num_vect.pop_back();
    }

    size_of_ele_vect /= 2;
    pairs = make_pairs_vect(all_num_vect);
    if(save_odd_vect >= 0 && size_of_ele_vect == 1)
    {
        vect_int pair;
        pair.push_back(save_odd_vect);
        pairs.push_back(pair);
        save_odd_vect = -1;
    }
    creat_main_and_pend_vect(pairs);
    insert_pend_in_main_vect();
    copy_db_cont_to_one_vect(main_chaine_vect);
}

void PmergeMe::merge_insert_sort_vect(int depth, vect_vect_int pairs)
{
    if (all_num_vect.size() % 2 != 0)
    {
        save_odd_vect = all_num_vect.back();
        all_num_vect.pop_back();
    }

    pairs = make_pairs_vect(all_num_vect);
    sort_pairs_vect(pairs);
    size_of_ele_vect *= 2;
    copy_db_cont_to_one_vect(pairs);
    if(pairs_with_same_ele_vect(pairs) > 3)
        merge_insert_sort_vect(depth + 1, pairs);
    part_of_insertion_vect(pairs);
}
void PmergeMe::part_of_vect(std::string range)
{   
    timeval start, end;
    long microseconds, seconds ,totaltime;
    gettimeofday(&start, NULL);
    size_of_ele_vect = 1;
    save_odd_vect = -1;
    vect_vect_int pairs;
    std::istringstream iss(range);
    int num;
    while(iss >> num)
        all_num_vect.push_back(num);
    size_t size = all_num_vect.size();
    std::cout<<"Before: ";
    print_container_vect(all_num_vect.begin(), all_num_vect.end());
    merge_insert_sort_vect(0, pairs);
    std::cout<<"after:  ";
    print_container_vect(all_num_vect.begin(), all_num_vect.end());
    is_sorted_vect(all_num_vect.begin(), all_num_vect.end(), size);
    gettimeofday(&end, NULL);
    microseconds = end.tv_usec - start.tv_usec;
    seconds = end.tv_sec - start.tv_sec;
    if (microseconds < 0) {
        microseconds += 1000000;
        seconds--;
    }
    totaltime = seconds * 1000000 + microseconds;
    std::cout << "Time to process a range of " << size << " elements with std::vector : "<<std::fixed << std::setprecision(5) << totaltime / 1000000.0 << " us" << std::endl;
    // std::cout<<"number of comparaison vect : "<<number_of_comparaison_vect<<std::endl;

}

//*******************************************************************************//
//*******************************        List    ******************************//
//*******************************************************************************//

int number_of_comparaison_list = 0;

void    PmergeMe::print_pend_list()
{
    std::cout<<"pend : "<<std::endl;;
    for (list_pair::iterator it = pend_list.begin(); it != pend_list.end(); std::advance(it, 1))
    {
        std::cout<<"first : ";
        print_container_list(it->first.begin(), it->first.end());
        std::cout<<"second : ";

        if(it->second == main_chaine_list.end())
            std::cout<<"end"<<std::endl;
        else
            print_container_list(it->second->begin(), it->second->end());
    }
    std::cout<<std::endl;
}

void PmergeMe::print_container_list(list_int_iter first, list_int_iter last)
{
    for (; first != last; ++first) {
        std::cout<<*first<<" ";
    }
    std::cout<<std::endl;
}

void PmergeMe::print_pairs_list(list_list_int pairs)
{
    std::cout<<"pairs : "<<std::endl;
    for (list_list_int_iter it_b= pairs.begin(); it_b != pairs.end(); std::advance(it_b, 1))
       print_container_list(it_b->begin(), it_b->end());
    std::cout<<std::endl;
}
void    PmergeMe::print_mainchain_list()
{
    std::cout<<"_list : "<<std::endl;;
    for (list_list_int_iter it_b= main_chaine_list.begin(); it_b != main_chaine_list.end(); std::advance(it_b, 1))
    {
        print_container_list(it_b->begin(), it_b->end());
    }
    std::cout<<std::endl;
}


int cal_size_list(list_int_iter first, list_int_iter last)
{
    int index = 0;
    for (; first != last; ++first)
        index++;
    return(index);
}

void is_sorted_list(list_int_iter first, list_int_iter last, size_t size)
{
    size_t s = cal_size_list(first, last);
    if(s != size)
    {
        std::cout<<"size deff"<<std::endl;
        return;
    }
    for (; first != my_prev(last) ; ++first)
    {
        if(*first > *my_next(first))
        {
            std::cout<<"\nNO"<<std::endl;
            return;
        }
    }
    std::cout<<"\nYES"<<std::endl;
}

list_list_int PmergeMe::make_pairs_list(list_int& all_num)
{
    list_list_int pairs;
    list_int_iter it_for_incre;
    list_int_iter it_b = all_num.begin();
    for (; std::distance(it_b, all_num.end()) >= size_of_ele_list; std::advance(it_b, size_of_ele_list))
    {
        if (std::distance(it_b, all_num.end()) >= size_of_ele_list)
        {
            it_for_incre = it_b;
            std::advance(it_for_incre, size_of_ele_list);
            list_int pair(it_b, it_for_incre);
            pairs.push_back(pair);
        }
    }
    if (it_b != all_num.end())
    {
        list_int pair(it_b, all_num.end());
        pairs.push_back(pair);
    }
    return pairs;
}

void PmergeMe::sort_pairs_list(list_list_int &pairs)
{
    for (list_list_int_iter it_b= pairs.begin(); std::distance(it_b, pairs.end()) >= 2; std::advance(it_b, 2))
    {
            number_of_comparaison_list ++;
        if (it_b->back() > my_next(it_b)->back() && cal_size_list(it_b->begin(), it_b->end()) == cal_size_list(my_next(it_b)->begin(), my_next(it_b)->end()))
        {
            std::swap(*(it_b), *my_next(it_b));
        }
    }
}

void PmergeMe::copy_db_cont_to_one_list(list_list_int pairs)
{
    all_num_list.clear();
    for (list_list_int_iter it_b= pairs.begin(); it_b != pairs.end(); std::advance(it_b, 1))
    {
        for (list_int_iter it_b1= it_b->begin(); it_b1 != it_b->end(); std::advance(it_b1, 1)) 
            all_num_list.push_back(*it_b1);
    }
    if (save_odd_list >= 0)
    {
        all_num_list.push_back(save_odd_list);
        save_odd_list = -1;
    }
}

int PmergeMe::pairs_with_same_ele_list(list_list_int pairs)
{
    int num_of_pairs = 0;

    for (list_list_int_iter it_b= pairs.begin(); it_b != pairs.end() ; std::advance(it_b, 1))
    {
        if (it_b->size()*2  == static_cast<size_t>(size_of_ele_list)) 
            num_of_pairs++;
    }
    return num_of_pairs;
}


bool compareBack_list(const list_int& a, const int& b) 
{
    number_of_comparaison_list++;
    return a.back() <= b;
}


void PmergeMe::creat_main_and_pend_list(list_list_int &pairs)
{   
    std::pair<std::list<int>, list_list_int_iter> pair;
    list_list_int_iter it_b = pairs.begin();
    list_list_int_iter sv_iter;
    pend_list.clear();
    main_chaine_list.clear();
    main_chaine_list.insert(main_chaine_list.end(), *it_b);
    ++it_b;
    if(pairs.end() != it_b)
    {
        main_chaine_list.insert(main_chaine_list.end(), *it_b);
        ++it_b;
    }
    for (; it_b != pairs.end(); ++it_b)
    {
        sv_iter = main_chaine_list.end();
        pair.first = *it_b;
        if (static_cast<size_t>(size_of_ele_list) == it_b->size() && my_next(it_b) != pairs.end())
        {
            ++it_b;
            sv_iter = main_chaine_list.insert(main_chaine_list.end(), *it_b);
        }
        pair.second = sv_iter;
        pend_list.push_back(pair);
    }
}

void PmergeMe::insert_pend_in_main_list()
{   
    list_pair::iterator save_erase;
    list_list_int_iter pos;
    list_list_int_iter it_b_m;
    list_pair::iterator start;
    list_pair::iterator end;
    int idx = 0;
    long int jacob_stl[] = {
        2, 2, 6, 10, 22, 42, 86, 170, 342, 682, 1366,
        2730, 5462, 10922, 21846, 43690, 87382, 174762, 349526, 699050,
        1398102, 2796202, 5592406, 11184810, 22369622, 44739242, 89478486,
        178956970, 357913942, 715827882, 1431655766, 2863311530, 5726623062,
        11453246122, 22906492246, 45812984490
    };
    
    while (pend_list.size()) 
    {
        start = pend_list.begin();
        end = pend_list.begin();
        for (int i = 0; i < jacob_stl[idx] - 1 && start != pend_list.end(); ++i)
			++start;
		if (start == pend_list.end())
			--start;
        while(true)
        {
            if (main_chaine_list.front().size() == start->first.size())
            {
                it_b_m = std::lower_bound(main_chaine_list.begin(), start->second, start->first.back(), compareBack_list);
                pos = main_chaine_list.insert(it_b_m, start->first);
                pend_list.erase(start);
            }
            else
            {
                main_chaine_list.insert(main_chaine_list.end(), start->first);

                pend_list.erase(start);
            }
            if (start == end )
				break ;
            --start;
        }
        idx++;
    }
}

void PmergeMe::part_of_insertion_list(list_list_int &pairs)
{
    if (all_num_list.size() % 2 != 0)
    {
        save_odd_list = all_num_list.back();
        all_num_list.pop_back();
    }
    size_of_ele_list /= 2;
    pairs = make_pairs_list(all_num_list);
    if(save_odd_list >= 0 && size_of_ele_list == 1)
    {
        list_int pair;
        pair.push_back(save_odd_list);
        pairs.push_back(pair);
        save_odd_list = -1;
    }
    creat_main_and_pend_list(pairs);
    insert_pend_in_main_list();
    copy_db_cont_to_one_list(main_chaine_list);
}


void PmergeMe::merge_insert_sort_list(int depth, list_list_int pairs)
{
    if (all_num_list.size() % 2 != 0)
    {
        save_odd_list = all_num_list.back();
        all_num_list.pop_back();
    }
    pairs = make_pairs_list(all_num_list);
    sort_pairs_list(pairs);
    size_of_ele_list *= 2;
    copy_db_cont_to_one_list(pairs);
    if(pairs_with_same_ele_list(pairs) > 3)
        merge_insert_sort_list(depth + 1, pairs);
    part_of_insertion_list(pairs);
}

void PmergeMe::part_of_list(std::string range)
{   
    timeval start, end;
    long microseconds, seconds ,totaltime;
    gettimeofday(&start, NULL);
    size_of_ele_list = 1;
    save_odd_list = -1;
    list_list_int pairs;
    std::istringstream iss(range);
    int num;
    while(iss >> num)
        all_num_list.push_back(num);
    size_t size = all_num_list.size();
    merge_insert_sort_list(0, pairs);
    is_sorted_list(all_num_list.begin(), all_num_list.end(), size);
    gettimeofday(&end, NULL);
    microseconds = end.tv_usec - start.tv_usec;
    seconds = end.tv_sec - start.tv_sec;
    if (microseconds < 0) {
        microseconds += 1000000;
        seconds--;
    }
    totaltime = seconds * 1000000 + microseconds;
    std::cout << "Time to process a range of " << size << " elements with std::list   : "<<std::fixed << std::setprecision(5)<< totaltime / 1000000.0 << " us" << std::endl;
    // std::cout<<"number of comparaison list : "<<number_of_comparaison_list<<std::endl;
}



//*******************************************************************************//
//*******************************        Commun    ******************************//
//*******************************************************************************//

int ft_strlen(char *av)
{
    int i = 0;
    while(av[i])
        i++;
    return i;
}

std::string PmergeMe::check_errors(char **av)
{
    std::string range;
    for (int i = 1; av[i]; i++) {
        if(ft_strlen(av[i]) == 0)
            throw std::runtime_error("Error");
        for (int j = 0; av[i][j]; j++) {
            if(!std::isdigit(av[i][j]))
                throw std::runtime_error("Error");
        }
            range.append(av[i]);
            range.append(" ");
    }
    return range;
}

PmergeMe::PmergeMe(char **av)
{
    std::string range = check_errors(av);
    part_of_vect(range);
    part_of_list(range);
}

PmergeMe::~PmergeMe(){}