#include <iostream>

using namespace std;
struct A
{
	A() {};
	virtual ~A()=0;
	int i;
	float f;

}; 
struct C
{

};
struct B
{
	B();
	~B();

	union U
	{
		int n;
		float ff;
		C c;
	} u;
};
B::B() {}
B::~B() {}

int main()
{
	cout << "hello" << endl;
	B b = { 1 };

	return 0;
}