#include <iostream> 
#include <cstdint>
#include <cstdlib>

using namespace std;

int main () {
	int a = 5;
	int *p;
	p = &a;
	a+= 5 ;
	cout << "Address of a :" << &a <<endl;
	cout << "Value of p : " << p <<endl;
	cout << "Address of a :" << (intptr_t)&a <<endl;
	cout << "Value of a : " << *(&a) <<endl;
	cout <<"Value of p : " << *p <<endl;
	system("pause");
	return 0;
}