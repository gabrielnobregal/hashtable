/**
 *  	Aplica��o que manipula tabelas hash com encadeamento externo.
 *	Foi desenvolvida como trabalho da disciplina Algoritmo e Estrutura de Dados
 *	na Universidade Federal do ABC - 2012.
 * 
 * 	@author Gabriel Nobgrega de Lima
 * 	@version 1.0
 * 	
 */ 
#include "menulib/Application.h"
#include "HashApp.h"

// Teste de m�dulos
#include "hashlib/tests/HashTableTest.h"
#include "hashlib/tests/LinkedListTest.h"
#include "hashlib/tests/HashHistogramTest.h"
#include "hashlib/tests/HashFileTest.h"

// Caso queira ativar a bateria de testes em cada um dos m�dulos da biblioteca
//#define HASH_LIB_TEST

using namespace std;

int main(int argc, char *argv[]){

#ifdef HASH_LIB_TEST

	// Sess�o de testes
	Test *test;

	test = new LinkedListTest();
	test->execute();
	delete test;

	test = new HashTableTest();
	test->execute();
	delete test;

	test = new HashHistogramTest();
	test->execute();
	delete test;

	test = new HashFileTest();
	test->execute();
        delete test;

#endif


	//Inicializa��o do programa
	Application *app = new HashApp();
	app->setCmd("->");

	app->start();
    	delete app;
	
	return 0;
}
