#include <iostream>
#include <string>

using namespace std;

class StudentRecord {
	private: 
	string stdName;
	int stdAge;
	double stdGpa;
	
	public: StudentRecord(string name, int age, double gpa){
		stdName = name;
		setAge(age);
		setGpa(gpa);
	}
	
	void setAge(int age) {
		if (age >= 0 && age <= 120) stdAge = age;
		else stdAge = 0;
	}
	void setGpa(double gpa) {
		if (gpa >= 0 && gpa <= 4) stdGpa = gpa;
		else stdGpa = 0;
	}
	
	string getName() const {
		return stdName;
	}
	
	int getAge() const {
		return stdAge;
	}
	
	double getGpa() const {
		return stdGpa;
	}
};

int main() {
	StudentRecord student1("Toyse", 100, 3.95);
	
	cout << "Name: " << student1.getName() << endl;
	cout << "Age: " << student1.getAge() << endl;
	cout << "Gpa: " << student1.getGpa();
	
	return 0;
}
