// ************************************************************************** //
//                                                                            //
//                Account.hpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //


#pragma once
#ifndef __ACCOUNT_H__
# define __ACCOUNT_H__

# include <iostream>     // std::cin, std::cout
# include <iomanip>      // std::get_time
# include <ctime>

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

class Account {


public:

	typedef Account		t;

	static int	getNbAccounts( void ); // DONE
	static int	getTotalAmount( void ); // DONE
	static int	getNbDeposits( void ); // DONE
	static int	getNbWithdrawals( void ); // DONE
	static void	displayAccountsInfos( void ); // DONE

	Account( int initial_deposit ); // DONE
	~Account( void ); // DONE

	void	makeDeposit( int deposit );
	bool	makeWithdrawal( int withdrawal );
	int		checkAmount( void ) const;
	void	displayStatus( void ) const;


private:

	static int	_nbAccounts; // DONE
	static int	_totalAmount; // DONE
	static int	_totalNbDeposits; // DONE
	static int	_totalNbWithdrawals; // DONE

	static void	_displayTimestamp( void ); // DONE

	int				_accountIndex; // DONE
	int				_amount;
	int				_nbDeposits;
	int				_nbWithdrawals;

	// Account( void );

};



// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //


#endif /* __ACCOUNT_H__ */