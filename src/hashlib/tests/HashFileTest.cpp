#include "HashFileTest.h"

void HashFileTest::hashFileFromHashTableFileTest(){
	HashFile *hash = new HashFile(4);

	hash->add("gabriel");
	hash->add("rafael");
	hash->add("zeca");

	hash->add("joao");

	//2 colisões garantidas
	hash->add("maria");
	hash->add("maria");

	//5 colisões garantidas
	hash->add("tatiana");
	hash->add("tatiana");
	hash->add("tatiana");
	hash->add("tatiana");
	hash->add("tatiana");


	if(hash->write("hashFileTest.txt")!=-1){
		cout<<"HashFileTest(hashFileFromHashTableFileTest): Realizado com sucesso..."<<endl;
	}


	delete hash;

}


void HashFileTest::execute(){
	hashFileFromHashTableFileTest();
}
