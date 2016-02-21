/**
 *  	Menu principal da aplicação.
 * 
 * 	@author Gabriel Nobgrega de Lima
 * 	@version 1.0
 * 	
 */ 

#ifndef MAINMENU_H
#define MAINMENU_H

// Estrutura de dados
#include "hashlib/HashFile.h"
#include "hashlib/HashHistogram.h"

// Interface com o usuário
#include "FindHashWordsMenu.h"
#include "EditHashMenu.h"
#include "HashAppMenu.h"
#include "HashFunctionMenu.h"


class MainMenu: public HashAppMenu{
private:
	void loadHashFromFile(string filePath);
	bool hashCreated;

public:
	MainMenu(HashFile *hashTable);
	void show(Screen *parent, int code);
	Menu* onOptionSelected(int userInput);

};

#endif
