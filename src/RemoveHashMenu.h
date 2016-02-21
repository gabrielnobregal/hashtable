/**
 *  	Menu de remoção de palavras.
 * 
 * 	@author Gabriel Nobgrega de Lima
 * 	@version 1.0
 * 	
 */ 

#ifndef REMOVEHASHMENU_H
#define REMOVEHASHMENU_H

#include "hashlib/HashFile.h"
#include "HashAppMenu.h"

class RemoveHashMenu: public HashAppMenu{
private:
	void removeWord(string word);
	int removeWordFromFile(string filePath);
	 
public:
	RemoveHashMenu(HashFile *hashTable);
	void show(Screen *parent, int code);	
	Menu* onOptionSelected(int userInput);

};

#endif
