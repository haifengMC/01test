#include <iostream>

using namespace std;

int main()
{
	int i1 = 5;
	int i2 = 10;
	int  * p = &i1;
	*p = i2;

	p++;

	cout << *p << endl;

	return 0;
}