#include "HashApp.h"

HashApp::HashApp(){
	hashTable = new HashFile();
	setMainMenu(new MainMenu(hashTable));
}

HashApp::~HashApp(){
    release();
}

HashTable* HashApp::getHash(){
	return hashTable;
}

void HashApp::setHashTable(HashFile *hashTable){
	this->hashTable = hashTable;
}

void HashApp::release(){

	if(hashTable!=NULL){
		delete hashTable;
	}

}
