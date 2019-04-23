
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

/*
   void fun(Child *p)
   {
   p->display();
   }
   */
int main(void)
{
	Base base;
	base.display();

	Child child;
	child.display();

	Son son;
	son.display();
}
