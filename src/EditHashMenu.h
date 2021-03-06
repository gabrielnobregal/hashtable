/**
 *  	Menu de edição da tabela hash.
 * 
 * 	@author Gabriel Nobgrega de Lima
 * 	@version 1.0
 * 	
 */ 

#ifndef EDITHASHMENU_H
#define EDITHASHMENU_H

// Estrutura de dados
#include "hashlib/HashFile.h"

// Interface com usuário
#include "FindHashWordsMenu.h"
#include "RemoveHashMenu.h"
#include "HashAppMenu.h"



class EditHashMenu: public HashAppMenu{
public:
	EditHashMenu(HashFile *hashTable);
	void show(Screen *parent, int code);	
	Menu* onOptionSelected(int userInput);
};

#endif
