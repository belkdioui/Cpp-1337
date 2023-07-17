/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:02:05 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/07/17 11:15:49 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
using namespace std;

class contact
{
	
};

class PhoneBook
{
	contact arr_contact[8];
};

void add()
{
	string str;
	do
	{
		cout << "enter the FIRST Name : ";
		getline(cin, str);
	}while(str.empty());

		
}

int main (int ac ,char **av) 
{
	string str;
	
	while (1)
	{
		getline(cin, str);
		if (!str.compare("ADD"))
		{
				
		}
		else if (!str.compare("SEARCH"))
		{
			
		}
		else if (!str.compare("EXIT"))
		{
			
		}
	}
	return 0;
}