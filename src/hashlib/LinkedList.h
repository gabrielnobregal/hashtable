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
	int sizeOfList; //Número de elementos na lista

	void setSize(int size);

public:
    /**
    * Construtor padrão.
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
    * @return Palavra no indice. Caso o indice não existe retornará NULL.
    */
	string get(int index);

    /**
    * Retorna número de palavras/registros na lista encadeada.
    * @return úmero de palavras/registros na lista encadeada.
    */
	int getSize();

    /**
    * Remove uma palavra/registro de indice index da lista encadeada.
    */
	int remove(int index);

    /**
    * Remove todas as palavras/registros da lista encadeada liberando memória.
    */
	void clear();

	/**
    * Libera memória.
    */
	void release();
};

#endif
