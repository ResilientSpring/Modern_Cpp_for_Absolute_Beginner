#include <iostream>
using namespace std;

class MyClass {

private:
	int x, y;

public:

	MyClass(int xx, int yy) :x{ xx }, y{ yy }{


	}


	MyClass(const MyClass& rhs) :x{ rhs.x }, y{ rhs.y }  // initialize members with other object's members [1]
	{
		cout << "Copy constructor invoked.\n";
	}

};



int main() {

	MyClass o1{ 1, 2 };

	MyClass o2 = o1; 

}


/*
* 
* References:
* 1. https://github.com/Apress/Modern-C-for-Absolute-Beginners-2nd-ed/blob/main/Chapter_23/Chapter_23.4.3/source.cpp


*/