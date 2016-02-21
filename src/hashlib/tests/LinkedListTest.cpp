#include "LinkedListTest.h"

void LinkedListTest::printList(LinkedList *list){
	for(int i=0; i<list->getSize(); i++){
		cout<<"Item "<<i<<":"<<list->get(i);
	}
}

void LinkedListTest::addGetListTest(LinkedList *list, int size){
	list->clear();

	for(int i=0; i<size; i++){
		stringstream ss;
		ss << "teste " << i;
		list->add(ss.str());
	}

	for(int i=0; i<list->getSize(); i++){
		stringstream ss;
		ss << "teste " << i;
		assert(list->get(list->getSize() - i - 1).compare(ss.str()) == 0);
	}

	cout<<"LinkedList(addListTest): Realizado com sucesso..."<<endl;		
	list->clear();
}

void LinkedListTest::removeListTest(LinkedList *list){
	list->clear();

	list->add("element");
	assert(list->getSize() == 1);
	list->remove(list->getSize()-1);
	assert(list->getSize() == 0);

	const int largeSize = 100;

	for(int i=0; i<largeSize; i++){
		stringstream ss;
		ss << "teste " << i;
		list->add(ss.str());
	}

	// Remoção nas extremidades
	list->remove(0);
	list->remove(list->getSize()-1);
	assert(list->getSize() == (largeSize-2));

	// Verificando integridade dos dados
	for(int i=0;i<list->getSize();i++){
		stringstream ss;
		ss << "teste " << (i+1);		
		assert( list->get(list->getSize() - i - 1).compare(ss.str())==0 );
	}

	// Remoção no interior
	const int interRem = list->getSize()/2;
	list->remove(interRem);

	assert(list->getSize() == (largeSize-3));

	stringstream ss;
	ss << "teste " << interRem-1;
	assert(list->get(interRem).compare(ss.str()) == 0);		

	ss.str("");

	ss << "teste " << interRem+1;
	assert(list->get(interRem-1).compare(ss.str()) == 0);

	list->clear();

	cout<<"LinkedList(removeListTest): Realizado com sucesso..."<<endl;		


}

void LinkedListTest::execute(){
	LinkedList *list = new LinkedList();
	addGetListTest(list, 10);
	removeListTest(list);
	delete list;	
}