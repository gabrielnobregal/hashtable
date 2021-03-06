#include "HashAppMenu.h"

HashAppMenu::~HashAppMenu(){

	if(hashTable!=NULL){
		hashTable->release();
	}

	delete hashTable;
}

bool HashAppMenu::hashExists(){
	return (hashTable != NULL);
}

HashFile* HashAppMenu::getHash(){
	return hashTable;
}

void HashAppMenu::setHash(HashFile *hashTable){
	this->hashTable = hashTable;
}

HashAppMenu::HashAppMenu(HashFile *hashTable){
	this->hashTable = hashTable;
}
