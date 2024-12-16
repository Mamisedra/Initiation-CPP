/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 10:21:07 by mranaivo          #+#    #+#             */
/*   Updated: 2024/12/16 14:53:28 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <sstream>
#include <iomanip>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( void )
{
	return ;
}

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}
int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}
int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

int	Account::checkAmount( void ) const
{
	return (this->_amount);
}

Account::Account( int initial_deposit ): \
_amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_displayTimestamp();
	this->_accountIndex = Account::_nbAccounts++;
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	this->_totalAmount += initial_deposit;
	std::cout << "created" << std::endl;
	return ;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
	return ;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() ;
	std::cout << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex << ";"
				<< "p_amount:" << checkAmount() << ";"
				<< "deposit:" << deposit << ";";
	_amount = checkAmount() + deposit;
	this->_totalAmount += deposit;
	this->_nbDeposits ++;
	std::cout	<< "amount:" << checkAmount() << ";"
				<< "nb_deposits:" << this->_nbDeposits
				<< std::endl;
	this->_totalNbDeposits ++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	if (checkAmount() < withdrawal)
	{
		std::cout	<< "index:" << this->_accountIndex << ";"
					<< "p_amount:" << checkAmount() << ";"
					<< "withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		std::cout	<< "index:" << this->_accountIndex << ";"
					<< "p_amount:" << checkAmount() << ";"
					<< "withdrawal:" << withdrawal << ";";
		this->_amount = checkAmount() - withdrawal;
		this->_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		std::cout	<< "amount:" << checkAmount() << ";"
					<< "nb_withdrawals:" << this->_nbWithdrawals
					<< std::endl;
		Account::_totalNbWithdrawals++;
	}
	return (true);
}


void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals ;
	std::cout << std::endl;
	return ;
}

void	Account::_displayTimestamp( void )
{
	std::time_t	now;
	std::tm*	localTime;

	now = std::time(nullptr);
	localTime = std::localtime(&now);
    std::ostringstream oss;
	oss << "[" << std::setw(4) << std::setfill('0') << (localTime->tm_year + 1900)
		<< std::setw(2) << std::setfill('0') << (localTime->tm_mon + 1)
		<< std::setw(2) << std::setfill('0') << localTime->tm_mday
		<< '_'
		<< std::setw(2) << std::setfill('0') << localTime->tm_hour
		<< std::setw(2) << std::setfill('0') << localTime->tm_min
		<< std::setw(2) << std::setfill('0') << localTime->tm_sec << "]";
	std::cout << std::setw(14) << oss.str() << " ";
}
