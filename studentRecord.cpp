#include <iostream>
#include <string>

using namespace std;

class StudentRecord {
	private:
		string name;
		int age;
		double gpa;
	
	public:
		StudentRecord(string stdName, int stdAge, double stdGpa) : name(stdName)
		{
			setAge(stdAge);
			setGpa(stdGpa);
		}
		
		void setAge(int newAge) {
			if (newAge > 0 && newAge < 120) age = newAge;
			else age = 0;
		}
		
		void setGpa(double newGpa) {
			if (newGpa >= 0 && newGpa <= 4) gpa = newGpa;
			else gpa = 0;
			}
		
	string getName() const { return name; }
		
		int getAge() const { return age; }
		
		double getGpa() const { return gpa; }
		
		void display() const {
			cout << "Name: " << name << endl;
			cout << "Age: " << age << endl;
			cout << "Gpa: " << gpa << endl;
			cout << endl;
		}
};

int main() {
	StudentRecord student1("Toyse", 230, 5.2);
	StudentRecord student2("Ama", 20, 4.8);
	
	student1.display();
	student2.display();
	
	return 0;
}
