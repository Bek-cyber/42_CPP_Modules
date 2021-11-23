#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
	Account::_displayTimestamp();
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += _amount;
	std::cout << "index:" << _accountIndex << ";";
	_nbAccounts += 1;
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
}

Account::~Account() {
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
}

int Account::getNbAccounts() {
	return (_nbAccounts);
}

int Account::getTotalAmount() {
	return (_totalAmount);
}

int Account::getNbDeposits() {
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals() {
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos() {
	Account::_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit) {
	Account::_displayTimestamp();
	_totalNbDeposits += 1;
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "deposit:" << deposit << ";";
	_amount += deposit;
	std::cout << "amount:" << _amount << ";";
	_nbDeposits += 1;
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;
	_totalAmount += deposit;
}

bool Account::makeWithdrawal(int withdrawal) {
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "withdrawal:";
	if (_amount - withdrawal < 0) {
		std::cout << "refused" << std::endl;
		return false;
	}
	else {
		_amount -= withdrawal;
		std::cout << withdrawal << ";";
		std::cout << "amount:" << _amount << ";";
		_nbWithdrawals += 1;
		std::cout << "nb_withdrawal:" << _nbWithdrawals << std::endl;
		_totalNbWithdrawals += 1;
	}
	_totalAmount -= withdrawal;
	return true;
}

int	Account::checkAmount() const {
	return _amount;
}

void Account::displayStatus() const {
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp() {
	std::time_t now = std::time(0);
	std::tm *local_time = std::localtime(&now);

	std::cout << std::setfill('0') << "[" << (1900 + local_time->tm_year)
			  << std::setfill('0') << std::setw(2) << (1 + local_time->tm_mon)
			  << std::setfill('0') << std::setw(2) << local_time->tm_mday
			  << "_" << std::setfill('0') << std::setw(2) << local_time->tm_hour
			  << std::setw(2) << local_time->tm_min
			  << std::setw(2) << local_time->tm_sec;
	std::cout << "] ";
}