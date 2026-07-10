#include <iostream>
#include <string>

class Employee {
	protected:
		std::string name;
		int id;
		double salary;
	
	public: Employee(std::string n, int i, double s) : name(n), id(i), salary(s) {}
	
	void displayInfo() {
		std::cout << "Employee name " << name << " with id " << id << ", earns " << salary << " per month" << std::endl;
	}
};

class Developer : public Employee {
	private:
		std::string programmingLanguage;
	
	public: Developer(std::string n, int i, double s, std::string pL) : Employee(n, i, s), programmingLanguage(pL) {}
	
	void code() {
		std::cout << name << " is coding in " << programmingLanguage << std::endl;
	}
};

int main() {
	
	Developer dev("Toyse", 7,  20000.8, "C++");
	
	dev.displayInfo();
	dev.code();
	
	return 0;
}
