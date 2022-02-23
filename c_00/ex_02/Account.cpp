#include "Account.hpp"

int	Account::_nbAccounts = 0;
// int	Account::_totalAmount = 0;
// int	Account::_totalNbDeposits = 0;
// int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial) : _amount(initial)
{
    _displayTimestamp();
    std::cout << "index:" << this->_nbAccounts++
    << ";amount:" << initial << ";created" << std::endl;
    return ;
}

Account::~Account(void)
{
    return ;
}

// static int	getNbAccounts(void)
// {
//     _displayTimestamp();
//     return (this->_nbAccounts);
// }

// static int	getTotalAmount( void )
// {
//     return (this->_totalAmount);
// }
// static int	getNbDeposits( void )
// {
//     return (this->_totatNbDeposits);
// }
// static int	getNbWithdrawals( void )
// {
//     return (this->_totalNbWithdrawals);
// }
// static void	displayAccountsInfos( void )
// {
//     std::cout << "accounts:8;total:20049;deposits:0;withdrawals:0";
// }

// void	makeDeposit( int deposit );
// bool	makeWithdrawal( int withdrawal );
// int		checkAmount( void ) const;
// void	displayStatus( void ) const;

void	Account::_displayTimestamp( void )
{
    struct std::tm when;
    time_t  now;

    now = time(NULL);
    when = *localtime(&now);
    std::cout << '[' << when.tm_year + 1900 << when.tm_mon << when.tm_mday
    << '_' << when.tm_hour << when.tm_min << when.tm_sec << ']';
}
