#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial) : _amount(initial)
{
	_displayTimestamp();
	std::cout << "index:" << this->_nbAccounts++
	<< ";amount:" << _amount << ";created" << std::endl;
	_totalAmount += _amount;
	this->_accountIndex = _nbAccounts - 1;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	return ;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
	<< ";amount:" << _amount << ";closed" << std::endl;
	return ;
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount()
	<< ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals()
	<< std::endl;
}

void	Account::makeDeposit( int deposit )
{
	int old_amount;

	old_amount = this->_amount;
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << old_amount
	<< ";deposits:" << deposit << ";amount:" << this->_amount
	<< ";nb_deposits:" << this->_nbDeposits
	<< std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int old_amount;

	old_amount = this->_amount;
	this->_amount -= withdrawal;
	_displayTimestamp();
	if (checkAmount() == 1)
	{
		_totalNbWithdrawals++;
		this->_nbWithdrawals++;
	}
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << old_amount
	<< ";withdrawal:";
	if (checkAmount() == 1)
	{
		std::cout << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:"
		<< this->_nbWithdrawals << std::endl;
		return (1);
	}
	this->_amount = old_amount;
	std::cout << "refused" << std::endl;
	return (0);
}

int		Account::checkAmount( void ) const
{
	if (this->_amount < 0)
		return (0);
	else
		return (1);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
	<< ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals
	<< std::endl;
}

void	Account::_displayTimestamp( void )
{
	struct std::tm when;
	time_t  now;

	now = time(NULL);
	when = *localtime(&now);
	std::cout << '[' << when.tm_year + 1900;
	if (when.tm_mon < 10)
		std::cout << '0';
	std::cout << when.tm_mon;
	if (when.tm_mday < 10)
		std::cout << '0';
	std::cout << when.tm_mday
	<< '_' << when.tm_hour << when.tm_min << when.tm_sec << "] ";
}
