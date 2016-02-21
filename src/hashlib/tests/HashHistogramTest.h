#ifndef HASHHISTOGRAMTEST_H
#define HASHHISTOGRAMTEST_H

#include "Test.h"
#include "../HashTable.h"
#include "../HashHistogram.h"

class HashHistogramTest: public Test{
private:
	void simpleHashHistogramFileTest();

public:
	void execute();
};

#endif
