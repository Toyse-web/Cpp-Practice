#include <iostream>
#include <string>
using namespace std;

class BankAccount {
	private:
		string owner;
		double balance;
	
	public:
		BankAccount(string name, double initial) {
			owner = name;
			if (initial >= 0) balance = initial;
			else balance = 0;
		}
	
	void deposit(double amount) {
		if (amount > 0) balance += amount;
	}
	
	bool withdraw(double amount) {
		if (amount > 0 && amount <= balance) {
			balance -= amount;
			return true;
		}
		return false;
	}
	
	double getBalance() const {
		return balance;
	}
};

int main() {
	
	BankAccount myAccount("Toyse", 1000);
	myAccount.deposit(500);
	myAccount.withdraw(300);
	
	cout << "Balance: " << myAccount.getBalance();
	
	return 0;
	
}
