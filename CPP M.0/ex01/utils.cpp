/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 09:57:18 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/09/27 14:54:39 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	ft_atoi(std::string str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}

void	while_to_print_charachter(std::string str, int num)
{
	int	i;

	i = -1;
	while (i++ < num)
		std::cout << str[i];
}

void	print_ten_charachter(std::string str)
{
	int	i;
	int	length;
	int	diff;
	
	i = -1;
	length = str.length();
	if (length > 10)
	{
		while_to_print_charachter(str, 8);
		std::cout << '.';
	}
	else if (length < 10)
	{
		std::cout << std::setw(10) << str;
	}
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