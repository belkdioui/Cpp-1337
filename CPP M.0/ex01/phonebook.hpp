/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:07:36 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/09/27 14:56:06 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

class Contact
{
	std::string	f_name;
	std::string	l_name;
	std::string	n_name;
	std::string	ph_number;
	std::string	dar_secret;
	
	public:
        void    set_first_name(std::string &firstname);
        void	set_last_name(std::string &last_name);
        void	set_nick_name(std::string &nick_name);
        void	set_phone_number(std::string &phone_number);
        void	set_darkest_secret(std::string &darkest_secret);
        std::string	get_first_name();
        std::string	get_last_name();
        std::string	get_nick_name();
        std::string	get_phone_number();
        std::string	get_darkest_secret();
};

class PhoneBook
{
	Contact contact[8];
	
	public:
		void	add(std::string str, int num, int index );
		void	list_elements();
		void	search_by_index();
	
};

int	is_digit(std::string str);
void    add(PhoneBook& phonebook);
int     ft_atoi(std::string str);
void	while_to_print_charachter(std::string str, int num);
void	print_ten_charachter(std::string str);

#endif