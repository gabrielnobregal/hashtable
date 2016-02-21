#include "HashTableTest.h"

void HashTableTest::sizeTest(){
	const int size = 100;
	HashTable *hash = new HashTable(size);
	assert(hash->getSize() == size);
	cout<<"HashTable(sizeTest): Realizado com sucesso..."<<endl;

	delete hash;
}

void HashTableTest::addGetTest(HashTable *hash){
	const int testSize = 1000;
	const string testWord = "teste";

	// Elementos com mesmo conteúdo textual devem colidir
	for(int i=0;i<testSize;i++){
		hash->add(testWord);
	}

	int hashKey = hash->getHashKey(testWord);

	// Verifica o número de colisões
	assert(hash->getHashKeyElements(hashKey) == testSize);



	for(int i = 0; i<hash->getHashKeyElements(hashKey);i++){
		assert(hash->get(hashKey, i).compare(testWord) == 0);
	}

	cout<<"HashTable(AddGetTest): Realizado com sucesso..."<<endl;
}

void HashTableTest::execute(){

	HashTable *hash = new HashTable(10000);
	addGetTest(hash);
	sizeTest();
	delete hash;
}
