#include "pch.h"
#include <iostream>

using namespace std;

class Parent
{
public:
	Parent(int a) {
		this->a = a;
	}

	virtual void print()
	{
		cout << "Parent::print a = " <<a << endl;
	}
//private:
	int a;
};

class Child :public Parent
{
public:
	Child(int a) :Parent(a)
	{

	}
	virtual void print()
	{
		cout << "Child::print a = " << a << endl;
	}

};
int main()
{
	Child array[] = {Child(0),Child(1),Child(2)};

	//for (int i = 0; i < 3; i++)
	//{
	//	array[i].print();
	//}
	Parent *pp = &array[0];

	pp->print();

	return 0;
}

