#include "Histogram.h"


void Histogram::clearElements(){
	for(int i=0;i<size;i++){
		element[i] = 0;
	}
}

void Histogram::setSize(int size){
	this->size = size;
}

Histogram::Histogram(int size){
	create(size);
}

Histogram::Histogram(){
	setSize(0);
	element = NULL;
}

Histogram::~Histogram(){
	release();
}

void Histogram::create(int size){
	setSize(size);
	element = new int[getSize()];
	clearElements();
}

void Histogram::add(int value){
	if(value<size && value>=0){
		element[value]++;
	}
}

int Histogram::getSize(){
	return size;
}

int Histogram::get(int value){

	if(value<size && value>=0)
		return element[value];

	return -1;
}

void Histogram::release(){

	if(element!=NULL){
		delete [] element;
	}

	setSize(0);
}
