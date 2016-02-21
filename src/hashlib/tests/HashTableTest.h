#ifndef HASHTABLETEST_H
#define HASHTABLETEST_H

#include <assert.h>
#include <sstream>
#include "Test.h"
#include "../HashTable.h"

class HashTableTest: public Test{
private:
	void sizeTest();
	void addGetTest(HashTable *hash);

public:
	void execute();
};

#endif
