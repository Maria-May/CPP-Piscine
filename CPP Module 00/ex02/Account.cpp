#include "Account.hpp"
#include <iostream>
#include <iomanip> // for time function
#include <ctime>

int Account:: _nbAccounts = 0;
int Account:: _totalAmount = 0;
int Account:: _totalNbDeposits = 0;
int Account:: _totalNbWithdrawals = 0;

Account:: Account(int initial_deposit)
{
	Account:: _displayTimestamp();
	this->_accountIndex = _nbAccounts++;
	this->_amount = initial_deposit;
	Account:: _totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount" << this->_amount << ";";
	std::cout << "created" << std:: endl;
}

Account:: ~Account(void)
{
	Account:: _displayTimestamp();
	this->_nbAccounts--;
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount" << this->_amount << ";";
	std::cout << "closed" << std:: endl;
}

Account:: Account(void)
{
	Account:: _displayTimestamp();
	this->_accountIndex = _nbAccounts++;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount" << this->_amount << ";";
	std::cout << "created" << std:: endl;
}

void	Account:: _displayTimestamp(void)
{
	std::time_t time = std::time(NULL);
	if (time == (std::time_t)(-1))
		return;
	std::tm *tm = std::localtime(&time);
	if (!tm)
		return;
	std::cout << std::put_time(tm, "[%Y%m%d_%H%M%S] ");
}

int	Account:: getNbAccounts(void)
{
	return (Account:: _nbAccounts);
}

int	Account:: getTotalAmount(void)
{
	return (Account:: _totalAmount);
}

int	Account:: getNbDeposits(void)
{
	return (Account:: _totalNbDeposits);
}

int	Account:: getNbWithdrawals(void)
{
	return (Account:: _totalNbWithdrawals);
}

void	Account:: displayAccountsInfos(void)
{
	Account:: _displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std:: endl;
}

void	Account:: makeDeposit(int deposit)
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposits:" << deposit << ";";
	this->_amount += deposit;
	this->_totalAmount += deposit;
	std::cout << "amount:" << this->_amount << ";";
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	std::cout << "nb_deposits:" << this->_nbDeposits << std:: endl;

}

bool	Account:: makeWithdrawal(int withdrawal)
{
	int amountTemp = this->_amount;

	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	this->_amount -= withdrawal;
	if (this->checkAmount())
	{
		std::cout << "withdrawal:refused" << std::endl;
		this->_amount = amountTemp;
		return (false);
	}
	else
	{
		std::cout << "withdrawal:" << withdrawal << ";";
		this->_totalAmount -= withdrawal;
		std::cout << "amount:" << this->_amount << ";";
		this->_nbWithdrawals++;
		this->_totalNbWithdrawals++;
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std:: endl;
	}
	return (true);
}

int		Account:: checkAmount(void) const
{
	return (this->_amount < 0);
}

void	Account:: displayStatus(void) const
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std:: endl;

}