#include <iostream>
using namespace std;

class MyClass {

public:

	int x, y;

	MyClass(int xx, int yy) :x{ xx }, y{ yy }  // member initializer list
	{

	}

};


int main() {

	MyClass o{ 1, 2 };  

	cout << o.x << " " << o.y << endl;

}