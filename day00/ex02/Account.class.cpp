// ************************************************************************** //
//                                                                            //
//                tests.cpp for GlobalBanksters United                        //
//                Created on  : Thu Nov 20 23:45:02 1989                      //
//                Last update : Wed Jan 04 09:23:52 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>
#include "Account.class.hpp"

bool Account::makeWithdrawal( int withdrawal )
{
	if (_amount < withdrawal)
	{
		std::cout<<"[20150406_153629] index:"<< _accountIndex<<
		";p_amount:"<<_amount<<
		";withdrawal:refused\n";
		return (0);
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	_nbWithdrawals++;

	std::cout<<"[20150406_153629] index:"<< _accountIndex<<
	";p_amount:"<<_amount + withdrawal<<
	";withdrawal:"<<withdrawal<<
	";amount:"<<_amount<<	
	";nb_withdrawals:"<<_nbWithdrawals <<std::endl;

	return (1);
}

void Account::makeDeposit( int deposit )
{
	_totalNbDeposits++;
	_nbDeposits++;
	_amount += deposit;
	_totalAmount += deposit;
	std::cout<<"[20150406_153629] index:"<< _accountIndex<<
	";p_amount:"<<_amount - deposit<<
	";deposit:"<<deposit<<
	";amount:"<<_amount<<	
	";nb_deposits:"<<_nbDeposits <<std::endl;
}

Account::~Account( void )
{


	std::cout<<"[20150406_153629] index:"<<
	_accountIndex<<";amount:"<<
	_amount<<";closed\n";

	return ;
}


int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;


Account::Account(int initial_deposit)
{
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_accountIndex = _nbAccounts;
	this->_nbAccounts++;
	_totalAmount += initial_deposit;
	this->_amount = initial_deposit;
	std::cout<<"[20150406_153629] index:"<<
	_accountIndex<<";amount:"<<
	_amount<<";created\n";
}


void Account::displayAccountsInfos()
{
	std::cout<<"[20150406_153629] accounts:"<<_nbAccounts<<	";total:"<<_totalAmount<<
	";deposits:"<<_totalNbDeposits << 
	";withdrawals:"<<_totalNbWithdrawals<<std::endl;
}

void Account::displayStatus( void ) const
{
	std::cout<<"[20150406_153629] index:"<< _accountIndex<<	";amount:"<<_amount<<
	";deposits:"<<_nbDeposits << 
	";withdrawals:"<<_nbWithdrawals<<std::endl;
}
