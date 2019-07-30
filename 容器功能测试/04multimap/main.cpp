#include <iostream>
#include <map>

using namespace std;

int main()
{
	multimap<int, float> m;
	m.insert({ 1, 1.1 });
	m.insert({ 1, 1.2 });
	m.insert({ 2, 2.1 });
	m.insert({ 3, 3.1 });
	m.insert({ 3, 3.2 });
	m.insert({ 3, 3.3 });

	for (pair<const int,float>& a : m)
	{
		cout << a.second << endl;
	}

	cout << (m.end() == m.find(3.1)) << endl;
	cout << (m.end() == m.find(4.1)) << endl;

	multimap<int, float>::iterator it = m.find(1.5);

	while (m.end() != it)
	{
		cout << (*(it++)).second << endl;
	}

		cout << m.count(1) << endl;


	return 0;
}