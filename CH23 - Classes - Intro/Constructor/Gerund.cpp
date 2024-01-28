#include <iostream>
using namespace std;

class MyClass {

public:

	MyClass(int x = 123, int y = 456) {

		cout << "Constructor invoked." << "\n";
	}

};


int main() {

	MyClass o;

}