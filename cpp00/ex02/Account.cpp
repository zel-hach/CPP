	#include "Account.hpp"
    #include <fstream>
    #include <ctime>
	int Account ::	_nbAccounts = 0;
	int Account ::	_totalAmount = 0;
	int Account ::	_totalNbDeposits = 0;
	int Account ::	_totalNbWithdrawals = 0;
    int Account :: getNbAccounts(void )
    {
        return (_nbAccounts);
    }
	int	Account :: getTotalAmount(void )
    {
        return (_totalAmount);
    }
	int	Account :: getNbDeposits(void )
    {
        return (_totalNbDeposits);
    }
	int	Account :: getNbWithdrawals(void )
    {
        return (_totalNbWithdrawals);
    }
	Account :: Account(int initial_deposit)
    {
        _displayTimestamp();
        _accountIndex = _nbAccounts;
        _nbAccounts++;
	    _nbDeposits = 0;
	    _amount = initial_deposit;
         _totalAmount += initial_deposit;
	    _nbWithdrawals = 0;
        std :: cout << "index :" << _accountIndex;
        std :: cout << ";amount :" << _amount;
        std :: cout << ";created" << std :: endl;
    }
	void Account :: displayAccountsInfos(void )
    {
        _displayTimestamp();
        std :: cout << "Account :" << _nbAccounts;
        std :: cout << ";total:" << _totalAmount;
        std :: cout << ";deposits:" << _totalNbDeposits;
        std :: cout << ";withdrawals :" << _totalNbWithdrawals << std :: endl;
    }

    Account :: Account( void )
    {
    }
    void Account :: makeDeposit(int deposit )
    {
        _totalNbDeposits = 1;
        _nbDeposits = _nbDeposits + 1;
        _displayTimestamp();
        std :: cout << "index:" << _accountIndex;
        std :: cout <<";p_amount: " << _amount;
        std :: cout << ";deposit:" << deposit;
        _amount += deposit;
        std :: cout << ";amount:" << _amount + deposit;
        std :: cout << ";nb_deposits:" << _nbDeposits << std:: endl;
    }
	bool Account :: makeWithdrawal( int withdrawal )
    {
        _displayTimestamp();
        std :: cout << "index:" << _accountIndex;
        std :: cout << ";p_amount:" << _amount;
        if (_amount < withdrawal)
        {
             std :: cout << ";withdrawal:" << "refused" << std:: endl;
             _nbWithdrawals = 0;
             return (false);
        }
        _amount -= withdrawal;
        std :: cout << ";withdrawal:" << withdrawal;
        std :: cout << ";amount:" << _amount;
        _nbWithdrawals = 1;
        std :: cout << ";nb_withdrawals:" << _nbWithdrawals<< std :: endl;
        return (true);
    }
	int	 Account :: checkAmount( void ) const
    {
        if (_totalAmount > 0)
            return (_totalAmount);
        else
            return(0);
    }
	void Account :: displayStatus( void ) const
    {
        _displayTimestamp();
        std :: cout << "index :" << _accountIndex;
        std :: cout << ";amount:" << _amount;
        std :: cout << ";deposits:" << _totalNbDeposits;
        if (_nbWithdrawals == 1)
            std :: cout << ";withdrawals :" << _totalNbWithdrawals + 1 << std :: endl;
        else
            std :: cout << ";withdrawals :" << _totalNbWithdrawals << std :: endl;
    }
    void	Account :: _displayTimestamp( void )
    {
        std ::time_t now = std ::time(0);
        tm *ltm = std :: localtime(&now);
        std :: cout << "[" << 1900 + ltm->tm_year;
        std :: cout << 1+ltm->tm_mon;
        std :: cout << ltm->tm_mday;
        std :: cout << "_";
        std :: cout << ltm->tm_hour;
        std :: cout << ltm->tm_min;
        std :: cout << ltm->tm_sec << "]";
    }
    Account :: ~Account( void )
    {
        _displayTimestamp();
        std :: cout << "index :" << _accountIndex;
        std :: cout << ";amount :" << _amount;
        std :: cout << ";closed" << std :: endl;
    }