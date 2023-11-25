/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 20:46:49 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/11/25 12:03:12 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_H
#define BITCOINEXCHANGE_H

#include <map>
#include <exception>
#include <iostream>
#include <stdexcept>
#include <fstream>
#include <climits>
#include <sstream>
#include <string>

class BitcoinExchange
{
    public:
        BitcoinExchange(std::ifstream& input);
        void check_err(std::string& line);
        void value_error_and_printing(std::string& date,std::string& value);
        ~BitcoinExchange();
        void fill_db();
        
    private:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& obj);
        BitcoinExchange& operator=(const BitcoinExchange& obj);
        std::map<std::string, float> exchange;
};


#endif