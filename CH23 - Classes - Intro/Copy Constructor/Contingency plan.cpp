#include <iostream>
using namespace std;

class MyClass {

private:
	int x, y;

public:

	MyClass(int xx, int yy) :x{ xx }, y{ yy }{


	}

};



int main() {

	MyClass o1{ 1, 2 };

	MyClass o2 = o1; 

}