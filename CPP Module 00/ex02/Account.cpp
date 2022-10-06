#include "Account.hpp"
#include <iostream>

int Account:: _nbAccounts = 0;
int Account:: _totalAmount = 0;
int Account:: _totalNbDeposits = 0;
int Account:: _totalNbWithdrawals = 0;

Account:: Account( int initial_deposit )
{

}

Account:: ~Account( void )
{

}

Account:: Account( void )
{

}

void	Account:: _displayTimestamp( void )
{

}

int	Account:: getNbAccounts( void )
{
	return (Account:: _nbAccounts);
}

int	Account:: getTotalAmount( void )
{
	return (Account:: _totalAmount);
}

int	Account:: getNbDeposits( void )
{
	return (Account:: _totalNbDeposits);
}

int	Account:: getNbWithdrawals( void )
{
	return (Account:: _totalNbWithdrawals);
}

void	Account:: displayAccountsInfos( void )
{
	Account:: _displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals << std:: endl;
}

void	Account:: makeDeposit( int deposit )
{
	
}

bool	Account:: makeWithdrawal( int withdrawal )
{

}

int		Account:: checkAmount( void ) const
{
	
}

void	Account:: displayStatus( void ) const
{

}