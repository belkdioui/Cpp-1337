/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:41:04 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/09/21 19:39:04 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    std::cout <<"index:" << _accountIndex << ";"
            << "amount:" << _amount << ";" << "created"
            << std::endl;
    _nbAccounts++;
    _totalAmount += _amount;
}

void    Account::displayStatus( void ) const
{
    std::cout <<"index:" << _accountIndex << ";"
            << "amount:" << _amount <<";deposits:"
         <<getNbDeposits()<<";withdrawals:"
         <<getNbWithdrawals()<<std::endl;
}

void Account::makeDeposit(int deposit)
{
    static int i;
    _nbDeposits = deposit;
    std::cout <<"index:" << _accountIndex << ";"
            << "p_amount:" << _amount <<";deposit:"
         <<_nbDeposits<<";amount:"<<_amount+_nbDeposits<<";nb_deposits:"
         <<i<<std::endl;
         _totalNbDeposits++;
         i++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    _nbWithdrawals = withdrawal;
    std::cout <<"index:" << _accountIndex << ";"
            << "p_amount:" << _amount <<";deposit:"
         <<_nbDeposits<<";withdrawals:";
         if (_nbWithdrawals > _amount)
        {
            std::cout<< "refused"<<std::endl;
            return(false);
        }
         std::cout<<_nbWithdrawals<<std::endl;
         _totalNbWithdrawals++;
    return true;
}
Account::~Account()
{
    
}
int	Account::getNbAccounts( void )
{
    return(_nbAccounts);
}
int	Account::getTotalAmount( void )
{
    return(_totalAmount);
}
int	Account::getNbDeposits( void )
{
    return(_totalNbDeposits);
}
int	Account::getNbWithdrawals( void )
{
    return(_totalNbWithdrawals);
}
int	getTotalAmount( void );
int	getNbDeposits( void );
int	getNbWithdrawals( void );
void    Account::displayAccountsInfos(void)
{
    std::cout <<"account:"<<_nbAccounts<<";"
         <<"total:"<<getTotalAmount()<<";deposits:"
         <<getNbDeposits()<<";withdrawals:"
         <<getNbWithdrawals()<<std::endl;
}