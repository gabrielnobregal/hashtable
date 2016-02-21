#ifndef LINKEDLISTTEST_H
#define LINKEDLISTTEST_H

#include <assert.h>
#include <sstream>

#include "Test.h"
#include "../LinkedList.h"

class LinkedListTest: public Test{

private:
	void printList(LinkedList *list);
	void addGetListTest(LinkedList *list, int size);
	void removeListTest(LinkedList *list);

public:
	void execute();
};

#endif
