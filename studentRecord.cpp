#include <iostream>
#include <string>
using namespace std;

class StudentRecord {
	private:
		string name;
		int age;
		double gpa;
	
	public:
		StudentRecord(string stdName, int stdAge, double stdGpa) {
			 name = stdName;
			 age = stdAge;
			 gpa = stdGpa;
		}
	
	string getName() const {
		return name;
	}
	
	void setAge(int newAge) {
		if (newAge >= 0 && newAge <= 120) age = newAge;
	}
	
	void setGpa(double newGpa) {
		if (newGpa >= 0 && newGpa <= 4) gpa = newGpa;
	}
	
	int getAge() const {
		return age;
	}
	
	double getGpa() const {
		return gpa;
	}
};

int main() {
	
	StudentRecord studentOne("Toyse", 20, 5.4);
	studentOne.getName();
	studentOne.getAge();
	studentOne.getGpa();
	
	cout << "Name: " << studentOne.getName() << endl;
	cout << "Age: " << studentOne.getAge() << endl;
	cout << "Gpa: " << studentOne.getGpa() << endl;
	
	return 0;
	
}
