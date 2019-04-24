#include <iostream>
#include <string>
#include <stdio.h>


using namespace std;
class person {
	private:
		int age;
		string name;
	public:
	person(){
		cout << "person()" << endl;
	}
	person(int age,string name){
		cout << "person(int ,string)" << endl;
		this->age = age;
		this->name = name;
	}
	~person(){
		cout << "~person()" << endl;
	}
	virtual int getAge(){
		cout << "person() getAge" << endl;
		return this->age;
	}
	virtual string getName(){
		cout << "person() getName" << endl;
		return this->name;
	}
};

class student : public person{
	private:
		int age;
		string name;
	public:
	student(int age,string name){
		cout << "student(int , string)" << endl;
		this->age = age;
		this->name = name;
	}
	/*提供有参数的构造函数之后，系统不再提供无参数的构造函数，需要自己提供*/
	student(){
		cout << "sdudent()" << endl;
	}
	~student(){
		cout << "~student()" << endl;
	}
		int getAge(){
		cout << "student() getAge" << endl;
		return this->age;
	}
	string getName(){
		cout << "student() getName" << endl;
		return this->name;
	}
};
int main(){
    student p(100,"liug");
    person per(10,"gang");
    cout << "-----------------------------" << endl;
    person * p1 = &p;
    p1->getAge();
    cout << "-----------------------------" << endl;
   //基类的指针不能转化成子类的指针； 
    student *p2 = &per;
    p2->getName();
    cout << "-----------------------------" << endl;
    return 0;
}

