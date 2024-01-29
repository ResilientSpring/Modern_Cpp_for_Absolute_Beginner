#include <iostream>
using namespace std;

class MyClass {

private:
	int  x;
	int* p;

public:

	MyClass(int xx, int pp) :x{ xx }, p{ new int{pp} }
	{
		cout << "User-defined constructor invoked.\n";
	}

	MyClass(const MyClass& obj) :x{ obj.x }, p{ new int{*obj.p} }
	{
		cout << "Copy constructor invoked.\n";
	}

};



int main() {

	MyClass o1{ 1, 2 };

	MyClass o2 = o1;

}