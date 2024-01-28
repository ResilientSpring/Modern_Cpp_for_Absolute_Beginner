#include <iostream>
using namespace std;

class MyClass {

public:
	int x, y;

	MyClass(int xx, int yy) {
		x = xx;
		y = yy;
	}

};


int main() {

	MyClass o{ 1, 2 };   // We invoke the constructor by providing arguments in the initializer list.

}