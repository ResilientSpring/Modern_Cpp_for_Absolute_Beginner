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

	}

};



int main() {

	MyClass o1{ 1, 2 };

	MyClass o2 = o1; 

}