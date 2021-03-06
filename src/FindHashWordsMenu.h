/**
 *  	Menu de busca de palavras.
 * 
 * 	@author Gabriel Nobgrega de Lima
 * 	@version 1.0
 * 	
 */ 

#ifndef FINDHASHWORDSMENU_H
#define FINDHASHWORDSMENU_H

//Interface com o usuário
#include "menulib/Application.h"
#include "MainMenu.h"

#include "HashAppMenu.h"

class FindHahsWordsMenu: public HashAppMenu{
private:
	void showWordPos(string word);
	int loadWordFromFile(string filePath);
public:
	FindHahsWordsMenu(HashFile *hashTable);
	void show(Screen *parent, int code);	
	Menu* onOptionSelected(int userInput);
};

#endif
