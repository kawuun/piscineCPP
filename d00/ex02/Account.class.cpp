// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Account.class.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/10/30 16:16:12 by skavunen          #+#    #+#             //
//   Updated: 2017/10/30 16:26:48 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Account.class.hpp"
#include <ctime>

int         Account::getNbAccounts( void ) {
    
    return (Account::_nbAccounts);
}

int         Account::getTotalAmount( void ) {
    
    return (Account::_totalAmount);
}

int         Account::getNbDeposits( void ) {
    
    return (Account::_totalNbDeposits);
}

int         Account::getNbWithdrawals( void ) {
    
    return (Account::_totalNbWithdrawals);
}

void        Account::_displayTimestamp( void ) {
    
    char buf[80];
    time_t sec = time(NULL);
    tm* timeinfo = localtime(&sec);

    strftime(buf, 80, "[%Y%m%d_%H%M%S] ", timeinfo);
    std::cout << buf;
}

void        Account::displayAccountsInfos( void ) {

    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts() << ";total:"
    << Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits()
    << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
} 

int         Account::checkAmount( void ) const {
    
    return (_amount);
}

void        Account::displayStatus( void ) const {

    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:"
    << this->checkAmount() << ";deposits:" << this->_nbDeposits
    << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void        Account::makeDeposit( int deposit) {

    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->checkAmount();
    this->_amount += deposit;
    this->_nbDeposits++;
    Account::_totalNbDeposits++;
    Account::_totalAmount += deposit;
    std::cout << ";deposit:" << deposit << ";amount:" << this->checkAmount()
    << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool        Account::makeWithdrawal( int withdrawal ) {
    
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->checkAmount();
    if (withdrawal > this->_amount)
    {
        std::cout << ";withdrawal:refused" << std::endl;
        return (false);
    }
    else
    {
        std::cout << ";withdrawal:" << withdrawal;
        this->_amount -= withdrawal;
        Account::_totalAmount -= withdrawal;
        this->_nbWithdrawals++;
        Account::_totalNbWithdrawals++;
        std::cout << ";amount:" << this->checkAmount() << ";nb_withdrawals:"
        << this->_nbWithdrawals << std::endl;
        return (true);
    }
}

Account::Account( int initial_deposit )
{
    Account::_displayTimestamp();
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_accountIndex = Account::_nbAccounts;
    Account::_nbAccounts++;
    Account::_totalAmount += this->_amount;
    std::cout << "index:" << this->_accountIndex << ";amount:"
    << this->checkAmount() << ";created" << std::endl;
}

Account::~Account( void )
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:"
    << this->checkAmount() << ";closed" << std::endl;
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;