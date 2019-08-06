#include <iostream>
#include <map>

using namespace std;


#define _F 0
class F
{
public:
	F(int key, F** f) 
	{
		if (f_map.end() == f_map.find(key))
		{
			f_map[key] = f;
		}
	}
	~F() {}

	static F* getF(int key) 
	{ 
		if (f_map.end() == f_map.find(key)) return NULL;
		return *f_map[key];
	}
	virtual string getName() { return "F"; }
protected:
	virtual F** insertMap() { return NULL; }

public:
	static map<int, F**> f_map;
};
map<int, F**> F::f_map;

#define _S 1
class S : public F
{
public:
	S(int key) : F(key, (F**)&p_s) {}
	~S() {}

	virtual string getName() override { return "S"; }
	virtual F** insertMap() override { return (F**)&p_s; }
private:
	static S* p_s;
};
S* S::p_s = new S(_S);

int main()
{
	cout << F::f_map.size() << endl;
	for (pair<const int, F**>& p : F::f_map)
	{
		cout << p.first << " " << p.second << endl;
	}
	//cout << F::getF(_F)->getName() << endl;
	cout << F::getF(_S)->getName() << endl;
}