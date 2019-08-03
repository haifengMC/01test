#include <iostream>

using namespace std;

template<typename T>
struct iterator_go
{
	typedef T value_type;
	T a;
	void printType()
	{
		cout << typeid(value_type).name() << endl;
	}
};

template<typename T>
struct iterator_go<T*>
{
	typedef T value_type;
	T* a;
	void printType()
	{
		cout << typeid(a).name() << endl;
	}
};


int main()
{
	iterator_go<int*> it;
	it.printType();

	return 0;
}