#include <iostream>
using namespace std;
class MyClass
{
private:
    int a;
    int b;
public:
	void get()
	{
		cout<<"\n Enter first number: ";
		cin>>a;
		cout<<"\n Enter second number: ";
		cin>>b;
	}
friend void display(MyClass obj);
};
void display(MyClass obj)
{
	cout<<"Sum of "<<obj.a<<" and "<<obj.b<<" will be "<<obj.a + obj.b;
}

int main()
{
    MyClass obj;
    obj.get();
    display(obj);	
	return 0;
}
