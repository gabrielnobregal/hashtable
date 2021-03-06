#include "HashHistogramTest.h"

void HashHistogramTest::simpleHashHistogramFileTest(){
	HashTable *hash = new HashTable(4);

	hash->add("gabriel");
	hash->add("rafael");
	hash->add("zeca");

	hash->add("joao");

	//2 colis�es garantidas
	hash->add("maria");
	hash->add("maria");

	//5 colis�es garantidas
	hash->add("tatiana");
	hash->add("tatiana");
	hash->add("tatiana");
	hash->add("tatiana");
	hash->add("tatiana");

	HashHistogram *hh = new HashHistogram(hash);
	if(hh->write("hashHistogramTest.txt")!=-1){
		cout<<"HashHistogramTest(simpleHashHistogramFileTest): Realizado com sucesso..."<<endl;
	}

	delete hash;
	delete hh;


}


void HashHistogramTest::execute(){
	simpleHashHistogramFileTest();
}
