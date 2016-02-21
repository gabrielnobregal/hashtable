/**
 *  	Define todo e qualquer menu da aplicação. Todos os menus manipulam a tabela hash
 *	e estas devem compartilhar sempre um ponteiro para tabela hash.
 * 	@author Gabriel Nobgrega de Lima
 * 	@version 1.0
 * 	
 */ 

#ifndef HASHAPPMENU_H
#define HASHAPPMENU_H

#include "menulib/Menu.h"
#include "hashlib/HashFile.h"

class HashAppMenu: public Menu{

protected:
	HashFile *hashTable;

	bool hashExists();
	HashFile* getHash();
	void setHash(HashFile *hashTable);

public:
	HashAppMenu(HashFile *hashTable);
	virtual ~HashAppMenu();

};

#endif
