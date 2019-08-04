#pragma once
#include <list>
#include <string>
#include <string.h>

using namespace std;

#define UNIT_SIZE 1024

class ByteStream
{
public:
	mutable list<void*> buf;
	list<void*>::iterator begUnit;
	size_t begUnitCount, begOffset;
	size_t size;
public:
	ByteStream();
	~ByteStream();

	//读
	int read(void* const & buf, const size_t &byteSize);
	int read(string & buf, const size_t &byteSize);
	//写
	int write(const void* const & buf, const size_t &byteSize);
	int write(const string & buf, const size_t &byteSize);
	//查看
	void* peek(const size_t &pos) const;
	//大小
	int& size() const;
	//判空
	bool empty();

};

