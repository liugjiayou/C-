#include <iostream>
using namespace std;

class Base
{
public:
	void display()
	{
		cout << "Base display" << endl;
	}
};

class Child:public Base
{
public:
	void display()
	{
		cout << "Child display" << endl;
	}
};

class Son:public Child
{
public:
	void display()
	{
		cout << "Son display" << endl;
	}
};

void fun(Base *p)
{
	p->display();
}

int main(void)
{

	Base *p = new Son();
	p->display();
	
	((Son *)p)->display();
}
