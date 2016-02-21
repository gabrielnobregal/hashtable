/**
 *  	Menu de seleção da função de hash.
 * 
 * 	@author Gabriel Nobgrega de Lima
 * 	@version 1.0
 * 	
 */ 

#ifndef HASHFUNCTIONMENU_H
#define HASHFUNCTIONMENU_H

// Estrutura de dados
#include "hashlib/HashFile.h"
#include "hashlib/WordSumKeyCalc.h"
#include "hashlib/WordMultKeyCalc.h"

// Interface com o usuário
#include "HashAppMenu.h"



class HashFunctionMenu: public HashAppMenu{

public:
	HashFunctionMenu(HashFile *hashTable);
	void show(Screen *parent, int code);
	Menu* onOptionSelected(int userInput);
};

#endif
