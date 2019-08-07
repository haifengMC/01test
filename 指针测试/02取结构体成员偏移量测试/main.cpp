#include <iostream>

using namespace std;

struct A
{
	int i1;
	int i2;
};


int main()
{
	A a = { 1, 2 };
	A* p = 0;
	unsigned int n = (unsigned int)((char*)&p->i2 - (char*)0);
	cout << n << endl;
	cout << a.i2 << endl;
	cout << *(int*)((char*)&a + n) << endl;

	return 0;
}