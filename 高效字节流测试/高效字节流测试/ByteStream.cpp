#include "ByteStream.h"



ByteStream::ByteStream()
{
	void* unit1 = (void*)malloc(UNIT_SIZE);
	void* unit2 = (void*)malloc(UNIT_SIZE);
	buf = { unit1, unit2 };
	begUnit = buf.begin();
	begUnitCount = 0;
	begOffset = 0;
	this->size = 0;
}


ByteStream::~ByteStream()
{
	for (void* unit : buf)
	{
		free(unit);
	}
}

int ByteStream::read(void * const & buf, const size_t & byteSize)
{
	return 0;
}

int ByteStream::read(string & buf, const size_t & byteSize)
{
	return 0;
}

int ByteStream::write(const void * const & buf, const size_t & byteSize)
{
	size_t offset = (begOffset + byteSize) % UNIT_SIZE;
	size_t count = (begOffset + byteSize) / UNIT_SIZE;

	if (0 == count)
	{
		memcpy(*begUnit + begOffset, buf, byteSize);
		begOffset += offset;
		this->size += byteSize;
		return byteSize;
	}

	

	for (size_t i = 0; i < count; i++)
	{

	}


	return 0;
}

int ByteStream::write(const string & buf, const size_t & byteSize)
{
	return 0;
}

void * ByteStream::peek(const size_t & pos) const
{
	if (pos > this->size)
	{
		return NULL;
	}

	size_t index = (begOffset + pos) % UNIT_SIZE;
	size_t count = (begOffset + pos) / UNIT_SIZE;
	size_t posUnitCount = (begUnitCount + count) % buf.size();
	list<void*>::iterator posUnit = buf.begin();
	for (size_t i = 0; i < posUnitCount; i++)
	{
		++posUnit;
	}

	return (char*)*posUnit + index;
}

int & ByteStream::size() const
{
	return this->size;
}

bool ByteStream::empty()
{
	return 0 == this->size;
}
