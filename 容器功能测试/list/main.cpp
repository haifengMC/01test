#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> l = { 1, 2, 3 };

	for (int i : l)
	{
		cout << i << " ";
	}
	cout << endl;

	l.remove(2);

	for (int i : l)
	{
		cout << i << " ";
	}
	cout << endl;

	l.remove(4);

	for (int i : l)
	{
		cout << i << " ";
	}
	cout << endl;


	return 0;
}