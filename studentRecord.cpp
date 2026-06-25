#include <iostream>
#include <string>
using namespace std;

class StudentRecord {
	private:
		string name;
		int age;
		double gpa;
	
	public:
		StudentRecord(string stdName, double stdGpa, int stdAge) {
			 name = stdName;
			 gpa = stdGpa;
			 age = stdAge;
		}
	
	void setGpa(double newGpa) {
		if (newGpa >= 0 && newGpa <= 4) gpa = newGpa;
	}
	
	void setAge(int newAge) {
		if (newAge >= 0 && newAge <= 120) age = newAge;
	}
	
	string getName() const {
		return name;
	}
	
	int getAge() const {
		return age;
	}
	
	double getGpa() const {
		return gpa;
	}
};

int main() {
	
	StudentRecord studentOne("Toyse", 20, 3.4);
	studentOne.getAge();
	studentOne.getGpa();
	
	cout << "Name: " << studentOne.getName() << " Age: " << studentOne.getAge() << " Gpa: " << studentOne.getGpa();
	
	return 0;
	
}
