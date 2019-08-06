#include <iostream>

using namespace std;
#define N -1

int main()
{
	char c = 128;

	unsigned int i = (unsigned char)c << 1;

	cout << i << endl;
	cout << N << endl;

	return 0;
}