#include <iostream>

using namespace std;

union U
{
	int n;
	float ff;
} u;

int main()
{
	cout << "hello" << endl;
	u = { .ff = 1.1 };
	cout << u.n << endl;

	return 0;
}