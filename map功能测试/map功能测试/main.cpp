#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<int, int*> m;
	m[1] = new int(2);
	cout << m[1] << " " << *m[1] << endl;
	cout << m[2] << " " << (NULL == m[2]) << endl;
	cout << (m.find(3) == m.end()) << endl;

	return 0;
}