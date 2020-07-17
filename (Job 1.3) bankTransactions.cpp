#include <iostream>
#include <vector>
#include <sstream>

std::vector<int> bankRequests(std::vector<int> accounts, std::vector<std::string> requests);

int main() {
	std::vector<int> accounts;
	std::vector<std::string> requests;

	accounts.push_back(92791);
	accounts.push_back(83126);
	accounts.push_back(7932);
	accounts.push_back(33180);
	accounts.push_back(44077);
	accounts.push_back(48367);
	accounts.push_back(34906);
	accounts.push_back(84237);
	accounts.push_back(41703);
	accounts.push_back(28680);
	accounts.push_back(78285);
	accounts.push_back(1443);
	accounts.push_back(64897);
	accounts.push_back(40212);
	accounts.push_back(62784);
	accounts.push_back(75685);
	accounts.push_back(49497);
	accounts.push_back(76826);
	accounts.push_back(59966);
	accounts.push_back(64477);

	requests.push_back("transfer 5 16 20570");
	requests.push_back("deposit 15 81053");
	requests.push_back("transfer 18 12 19445");
	requests.push_back("withdraw 11 21658");
	requests.push_back("deposit 20 45535");
	requests.push_back("withdraw 13 63316");
	requests.push_back("withdraw 11 66486");
	requests.push_back("withdraw 4 33290");

	std::vector<int> systemID = bankRequests(accounts, requests);

	std::cout << "[";
	for (int x = 0; x < systemID.size(); x++) {
		std::cout << systemID[x] << " ";
	}
	std::cout << "]" << std::endl;

	system("pause");
	return 0;
}


std::vector<int> bankRequests(std::vector<int> accounts, std::vector<std::string> requests) {
	std::string wDraw = "withdraw";
	std::string transF = "transfer";
	std::string depo = "deposit";
	std::string type;
	int account1;
	int account2;
	int amount;
	int transactionCounter = 0;
	std::vector<int> accountID;

	for (int x = 0; x < requests.size(); x++) {

		// If Transaction Type = Withdraw
		std::size_t findTrasactionType = requests[x].find(wDraw);
		if (findTrasactionType != std::string::npos) {
			transactionCounter--;
			std::stringstream ss(requests[x]);
			ss >> type >> account1 >> amount;
			if (account1 != 0)
				account1--;
			if (account1 >= accounts.size()) {
				accountID.push_back(transactionCounter);
				return accountID;
			}
			if ((accounts[account1] - amount) < 0) {
				accountID.push_back(transactionCounter);
				return accountID;
			}
			else
				accounts[account1] -= amount;
		}

		// If Transaction Type = Transfer
		findTrasactionType = requests[x].find(transF);
		if (findTrasactionType != std::string::npos) {
			transactionCounter--;
			std::stringstream ss(requests[x]);
			ss >> type >> account1 >> account2 >> amount;
			if (account1 != 0)
				account1--;
			if (account2 != 0)
				account2--;
			if (account1 >= accounts.size()) {
				accountID.push_back(transactionCounter);
				return accountID;
			}
			if (account2 >= accounts.size()) {
				accountID.push_back(transactionCounter);
				return accountID;
			}
			if ((accounts[account1] - amount) < 0) {
				accountID.push_back(transactionCounter);
				return accountID;
			}
			else {
				accounts[account1] -= amount;
				accounts[account2] += amount;
			}

		}

		// If Transaction Type = Deposit
		findTrasactionType = requests[x].find(depo);
		if (findTrasactionType != std::string::npos) {
			transactionCounter--;
			std::stringstream ss(requests[x]);
			ss >> type >> account1 >> amount;
			if (account1 != 0)
				account1--;
			if (account1 >= accounts.size()) {
				accountID.push_back(transactionCounter);
				return accountID;
			}
			else
				accounts[account1] += amount;
		}
	}

	return accounts;
}
