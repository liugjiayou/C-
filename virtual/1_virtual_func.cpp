#include <iostream>
using namespace std;

class B0
{
public:
	virtual void display()
	{
		cout << "B0 display" << endl;
	}
};

class B1:public B0
{
public:
	virtual void display()
	{
		cout << "B1 display" << endl;
	}
};

class D1:public B1
{
public:
	void display()
	{
		cout << "D1 display" << endl;
	}
};

int main(void)
{
	B0 *p = new B0();
	B0 *b = new B1();
	B0 *d = new D1();
	p->display();
	cout << " ----------------" << endl;
	b->display();
	cout << " ----------------" << endl;
	d->display();
	delete p;
	delete b;
	delete d;
}
