/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:02:05 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/09/25 10:51:05 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

class contact
{
	std::string	f_name;
	std::string	l_name;
	std::string	n_name;
	std::string	ph_number;
	std::string	dar_secret;
	
	public:
		void	set_first_name(std::string &first_name)
		{
			f_name = first_name;
		}
		void	set_last_name(std::string &last_name)
		{
			l_name = last_name;
		}
		void	set_nick_name(std::string &nick_name)
		{
			n_name = nick_name;
		}
		void	set_phone_number(std::string &phone_number)
		{
			ph_number = phone_number;
		}
		void	set_darkest_secret(std::string &darkest_secret)
		{
			dar_secret = darkest_secret;
		}
		

		std::string	get_first_name()
		{
			return (f_name);
		}
		std::string	get_last_name()
		{
			return (l_name);
		}
		std::string	get_nick_name()
		{
			return (n_name);
		}
		std::string	get_phone_number()
		{
			return (ph_number);
		}
		std::string	get_darkest_secret()
		{
			return (dar_secret);
		}
};

class PhoneBook
{
	contact contact[8];
	
	public:
		void	add(std::string str, int num, int index );
		void	list_elements();
		void	search_by_index();
	
};

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

void	get_input_and_setit(int num, PhoneBook& phonebook, std::string msg, int index)
{
	std::string str;
	do
	{
		std::cout << msg;
		getline(std::cin, str);
		if (std::cin.eof())
		{
			std::cout<< std::endl;
			exit(0);
		}
	}while(str.empty());
	phonebook.add(str, num, index);
}

void add(PhoneBook& phonebook)
{
	static int index;

	std::string str;
	get_input_and_setit(0, phonebook, "enter the FIRST Name : ", index);
	get_input_and_setit(1, phonebook, "enter the LAST Name : ", index);
	get_input_and_setit(2, phonebook, "enter the NICK Name : ", index);
	get_input_and_setit(3, phonebook, "enter the PHONE Number : ", index);
	get_input_and_setit(4, phonebook, "enter the DARKEST Secret : ", index);
	index++;
	if(index == 8)
		index = 0;
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

int	is_digit(std::string str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if (!std::isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
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
