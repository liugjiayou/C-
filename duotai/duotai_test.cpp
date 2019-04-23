#include <iostream>
#include <string>
#include <stdio.h>


using namespace std;
class person {
	private:
		int age;
		string name;
	public:
	person(int age,string name){
		cout << "person()" << endl;
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
#if 1
	student(int age,string name){
		cout << "student()" << endl;
		this->age = age;
		this->name = name;
	}
	~student(){
		cout << "student()" << endl;
	}
#endif
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
    person * p1 = &p;
    p1->getAge();
//    student *p2 = &p;
 //   p2->getName();	
}
