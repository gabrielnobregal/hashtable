#ifndef HASHFILETEST_H
#define HASHFILETEST_H

#include "../HashTable.h"
#include "../HashFile.h"
#include "Test.h"

class HashFileTest: public Test{
private:
	void hashFileFromHashTableFileTest();

public:
	void execute();
};

#endif
