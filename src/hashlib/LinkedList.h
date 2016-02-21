/**
 *  	Implementa listas encadeadas de palavras.
 * 
 * 	@author Gabriel Nobgrega de Lima
 * 	@version 1.0
 * 	
 */ 
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include <string>
#include "Node.h"

class LinkedList{
private:
	Node *head;
	int sizeOfList; //N�mero de elementos na lista

	void setSize(int size);

public:
    /**
    * Construtor padr�o.
    */
	LinkedList();

	virtual ~LinkedList();

    /**
    * Adiciona uma palavra/registro na lista encadeada.
    * @param value Palavra.
    */
	void add(string value);

    /**
    * Retorna uma palavra/registro com indice index lista encadeada.
    * @param index Indice do registro.
    * @return Palavra no indice. Caso o indice n�o existe retornar� NULL.
    */
	string get(int index);

    /**
    * Retorna n�mero de palavras/registros na lista encadeada.
    * @return �mero de palavras/registros na lista encadeada.
    */
	int getSize();

    /**
    * Remove uma palavra/registro de indice index da lista encadeada.
    */
	int remove(int index);

    /**
    * Remove todas as palavras/registros da lista encadeada liberando mem�ria.
    */
	void clear();

	/**
    * Libera mem�ria.
    */
	void release();
};

#endif
