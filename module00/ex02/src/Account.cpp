/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:16:01 by bszabo            #+#    #+#             */
/*   Updated: 2024/09/23 19:05:05 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

/* ************************************************************************** */
/* *********************************************** Constructor and Destructor */

Account::Account( int initial_deposit )
    : _accountIndex(_nbAccounts),
    _amount( initial_deposit ),
    _nbDeposits( 0 ),
    _nbWithdrawals( 0 ) {
        _nbAccounts++;
        _totalAmount += initial_deposit;

        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";"
                  << "amount:" << _amount << ";"
                  << "created" << std::endl;
    }

Account::~Account( void ) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
              << "amount:" << _amount << ";"
              << "closed" << std::endl;
}

/* ************************************************************************** */
/* ************************************************ Private Static Attributes */

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

/* ************************************************************************** */
/* *************************************************** Private Static Methods */

void Account::_displayTimestamp( void ) {
    std::time_t now = std::time(NULL);
    std::tm* localTime = std::localtime(&now);

    // output format: [YYYYMMDD_HHMMSS]
    std::cout << '[' 
              << std::setfill('0') << std::setw(4) << (localTime->tm_year + 1900) // YYYY
              << std::setfill('0') << std::setw(2) << (localTime->tm_mon + 1) // MM
              << std::setfill('0') << std::setw(2) << localTime->tm_mday // DD
              << "_"
              << std::setfill('0') << std::setw(2) << localTime->tm_hour // HH
              << std::setfill('0') << std::setw(2) << localTime->tm_min // MM
              << std::setfill('0') << std::setw(2) << localTime->tm_sec // SS
              << "] ";
}

/* ************************************************************************** */
/* **************************************************** Public Static Methods */

int Account::getNbAccounts( void ) {
    return _nbAccounts;
}

int Account::getTotalAmount( void ) {
    return _totalAmount;
}

int Account::getNbDeposits( void ) {
    return _totalNbDeposits;
}

int Account::getNbWithdrawals( void ) {
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos( void ) {
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";"
              << "total:" << _totalAmount << ";"
              << "deposits:" << _totalNbDeposits << ";"
              << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

/* ************************************************************************** */
/* ************************************************ Public Non-Static Methods */

void Account::makeDeposit( int deposit ) {
    _nbDeposits++;
    _totalNbDeposits++;
    _amount += deposit;
    _totalAmount += deposit;

    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
              << "p_amount:" << _amount - deposit << ";"
              << "deposit:" << deposit << ";"
              << "amount:" << _amount << ";"
              << "nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal( int withdrawal ) {
    if (withdrawal > _amount) {
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";"
                  << "p_amount:" << _amount << ";"
                  << "withdrawal:refused" << std::endl;
        return false;
    }

    _nbWithdrawals++;
    _totalNbWithdrawals++;
    _amount -= withdrawal;
    _totalAmount -= withdrawal;

    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
              << "p_amount:" << _amount + withdrawal << ";"
              << "withdrawal:" << withdrawal << ";"
              << "amount:" << _amount << ";"
              << "nb_withdrawals:" << _nbWithdrawals << std::endl;

    return true;
}

int Account::checkAmount( void ) const {
    return _amount;
}

void Account::displayStatus( void ) const {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
              << "amount:" << _amount << ";"
              << "deposits:" << _nbDeposits << ";"
              << "withdrawals:" << _nbWithdrawals << std::endl;
}