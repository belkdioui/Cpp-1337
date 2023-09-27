/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:02:05 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/09/27 14:54:52 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main (int ac ,char **av) 
{
	std::string str;
	PhoneBook phonebook;
	
	while (1)
	{
	std::cout << "write the correct cmd :"<< std::endl;
		getline(std::cin, str);
		if (std::cin.eof())
		{
			std::cout<< std::endl;
			exit(0);
		}
		if(str == "ADD")
		{
			add(phonebook);
		}
		else if (str == "SEARCH")
		{
			phonebook.list_elements();
			phonebook.search_by_index();
		}
		else if(str == "EXIT")
			return 0;
	}
	return 0;
}
