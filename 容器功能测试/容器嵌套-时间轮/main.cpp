#include <iostream>
#include <array>
#include <list>
#include <unistd.h>

using namespace std;

int main()
{
	array<list<int>, 9> arr;

	int count = 0;

	while (true)
	{
		count %= arr.size();

		cout << arr[count].empty() << "[" << count++ << "]" << endl;

		sleep(1);

	}


	return 0;
}