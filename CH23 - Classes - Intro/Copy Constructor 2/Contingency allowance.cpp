#include <iostream>
using namespace std;

class MyClass {

private:
	int  x;
	int* p;

public:

	MyClass(int xx, int pp) :x{ xx }, p{ new int{pp} }
	{

	}

	MyClass(const MyClass& obj):x{obj.x}, p{new int{*obj.p}}
	{
	
	
	}

};



int main() {




}