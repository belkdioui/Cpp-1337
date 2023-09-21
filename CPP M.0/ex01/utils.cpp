/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 09:57:18 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/09/21 10:08:49 by bel-kdio         ###   ########.fr       */
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