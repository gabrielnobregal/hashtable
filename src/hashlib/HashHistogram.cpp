#include "HashHistogram.h"

HashHistogram::HashHistogram(){
	hashTable = NULL;
	Histogram::setSize(0);
}

HashHistogram::HashHistogram(HashFile *hashFile){
    hashTable = hashFile;
}

HashHistogram::HashHistogram(HashTable *hashTable){
	create(hashTable);
}

int HashHistogram::maxNumOfElements(HashTable *hashTable){

	int maxNumberOfElements = 0;

	for(int i=0;i<hashTable->getSize();i++){
		int numHashKeyElements = hashTable->getHashKeyElements(i);
		if(numHashKeyElements > maxNumberOfElements){
			maxNumberOfElements = numHashKeyElements;
		}
	}

	return maxNumberOfElements;
}

void HashHistogram::create(){
	this->hashTable = hashTable;
	int maxElements = maxNumOfElements(hashTable);
	Histogram::create(maxElements+1);

	for(int i=0; i < hashTable->getSize(); i++){
		int sizeList = hashTable->getHashKeyElements(i);
		Histogram::add(sizeList);
	}
}

void HashHistogram::create(HashTable *hashTable){
	this->hashTable = hashTable;
	create();
}

int HashHistogram::write(string filePath){
	if(hashTable!=NULL  && Histogram::getSize()>0){
		ofstream outFile (filePath);
		if (outFile.is_open()){

			for(int i=0; i<Histogram::getSize(); i++){
				outFile <<"Endereco com "<<i<<" registros: "<<Histogram::get(i);
				outFile << endl;
			}

			outFile.close();

		}else{
			return -1;
		}
	}else{
		return -1;
	}
	return 0;
}

void HashHistogram::release(){
    hashTable = NULL;
}

HashHistogram::~HashHistogram(){
	release();
}
