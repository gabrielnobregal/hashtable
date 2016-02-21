#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <fstream>

//Estrutura de dados
#include "HashTable.h"

//Interface com usuário
#include "../menulib/Application.h"
#include "../hashlib/HashApp.h"
#include "MainMenu.h"

//Testes
#include "LinkedListTest.h"
#include "HashTableTest.h"
#include "HashHistogramTest.h"
#include "HashFileTest.h"
#include "LinkedListTest.h

using namespace std;

int main(int argc, char *argv[]){
	// Sessão de testes
	Test *test = new HashTableTest();
	test->execute();

	test = new LinkedListTest();
	test->execute();

	test = new HashHistogramTest();
	test->execute();

	test = new HashFileTest();
	test->execute();	

	system("PAUSE");
	return 0;
}
