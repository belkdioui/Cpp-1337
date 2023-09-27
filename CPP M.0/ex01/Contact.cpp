/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:52:30 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/09/27 14:37:30 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	Contact::set_first_name(std::string &first_name)
{
	f_name = first_name;
}
void	Contact::set_last_name(std::string &last_name)
{
	l_name = last_name;
}
void	Contact::set_nick_name(std::string &nick_name)
{
	n_name = nick_name;
}
void	Contact::set_phone_number(std::string &phone_number)
{
	ph_number = phone_number;
}
void	Contact::set_darkest_secret(std::string &darkest_secret)
{
	dar_secret = darkest_secret;
}
std::string	Contact::get_first_name()
{
	return (f_name);
}
std::string	Contact::get_last_name()
{
	return (l_name);
}
std::string	Contact::get_nick_name()
{
	return (n_name);
}
std::string	Contact::get_phone_number()
{
	return (ph_number);
}
std::string	Contact::get_darkest_secret()
{
	return (dar_secret);
}