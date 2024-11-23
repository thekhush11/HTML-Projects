#include <iostream>
#include <string>
using namespace std;

class Student 
{
protected:
    int roll, age;
    string name, branch;
};

class Biodata : public Student 
{
public:
    void get()
	{
		cout << "Enter the student's name: ";
		cin >> name;
		cout << "Enter the student's Roll No.: ";
		cin >> roll;
		cout << "Enter the student's branch: ";
		cin >> branch;
		cout << "Enter the student's age: ";
		cin >> age;
	}
	void show()
	{
		cout << "Name: " << name << endl;
		cout << "Roll No.: " << roll << endl;
		cout << "Branch: " << branch << endl;
		cout << "Age: " << age << endl;
	}
};

int main()
{
	Biodata bio;
	bio.get();
	bio.show();
	return 0;
}
