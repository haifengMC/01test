#include <iostream>

using namespace std;

int main()
{
	char c = 128;

	unsigned int i = (unsigned char)c << 1;

	cout << i << endl;


	return 0;
}