/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:52:53 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/09/27 14:54:56 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	PhoneBook::add(std::string str, int num, int index )
{
	if (num == 0)
		contact[index].set_first_name(str);
	if (num == 1)
		contact[index].set_last_name(str);
	if (num == 2)
		contact[index].set_nick_name(str);
	if (num == 3)
		contact[index].set_phone_number(str);
	if (num == 4)
		contact[index].set_darkest_secret(str);
}

void	PhoneBook::list_elements()
{
	int		i;
	std::string str;
	i = -1;
	std::cout << "============================================="<< std::endl;
	while (++i < 8)
	{
		str = contact[i].get_first_name();
		if (str.empty() && i == 0)
		{
			std::cout << "============================================="<< std::endl;
			std::cout << "============================================="<< std::endl;
			return ;
		}
		if (str.empty())
		{
			std::cout << std::endl;
			break ;
		}
		std::cout << "|";
		std::cout <<std::setw(10)<< i+1;
		std::cout << "|";
		print_ten_charachter(contact[i].get_first_name());
		std::cout << "|";
		print_ten_charachter(contact[i].get_last_name());
		std::cout << "|";
		print_ten_charachter(contact[i].get_nick_name());
		std::cout << "|"<<std::endl;
		std::cout << "============================================="<< std::endl;
	}
}

void	PhoneBook::search_by_index()
{
	int	i;
	int index;
	std::string str;
	std::stringstream convert;

	i = -1;
	while (++i < 8)
	{
		str = contact[i].get_first_name();
		if (str.empty() && i == 0)
			return ;
		if (str.empty())
		{
			std::cout<< std::endl;
			break ;
		}
	}
	index = i;
	do{
		std::cout<< "tape index from 1 to "<< index <<std::endl;
		getline(std::cin, str);
		if (std::cin.eof())
		{
			std::cout<< std::endl;
			exit(0);
		}

		i =ft_atoi(str);
	}while(!is_digit(str) || i < 1 || i > index);
	std::cout << "============================================"<< std::endl;
	std::cout << "INDEX         :" << std::setw(10)<<i;
	std::cout <<std::endl;
	std::cout << "First Name    :";
	print_ten_charachter(contact[i - 1].get_first_name());
	std::cout << std::endl;
	std::cout << "Last Name     :";
	print_ten_charachter(contact[i - 1].get_last_name());
	std::cout << std::endl;
	std::cout << "Nick Name     :";
	print_ten_charachter(contact[i - 1].get_nick_name());
	std::cout << std::endl;
	std::cout << "Phone Number  :";
	print_ten_charachter(contact[i - 1].get_phone_number());
	std::cout << std::endl;
	std::cout << "Darkest Secret:";
	print_ten_charachter(contact[i - 1].get_darkest_secret());
	std::cout <<std::endl;
	std::cout << "============================================"<< std::endl;
}