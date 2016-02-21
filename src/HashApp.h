/**
 *  	O gerenciador de menus utilizado no aplicativo.
 * 
 * 	@author Gabriel Nobgrega de Lima
 * 	@version 1.0
 * 	
 */ 

#ifndef HASHAPP_H
#define HASHAPP_H

#include <string>
#include <istream>

//Estrutura de dados
#include "hashlib/HashFile.h"

//Interface com o usuário
#include "menulib/Application.h"
#include "MainMenu.h"

class HashApp: public Application{

private:
	HashFile *hashTable;

public:
	HashApp();
	virtual ~HashApp();
	HashTable* getHash();
	void setHashTable(HashFile *hashTable);
	void release();
};

#endif
