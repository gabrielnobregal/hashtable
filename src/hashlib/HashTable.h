/**
 *  	Implementa uma tabela hash com encadeamento externo para o armazenamento de palavras.
 * 
 * 	@author Gabriel Nobgrega de Lima
 * 	@version 1.0
 * 	
 */ 

#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <iostream>
#include <string>
#include <stdlib.h>
#include <math.h>
#include "LinkedList.h"
#include "HashKeyCalc.h"
#include "WordSumKeyCalc.h"


using namespace std;

class HashTable{

private:
	LinkedList **list;
	HashKeyCalc *hashKeyCalc;
	int size;
	int numOfElements;


	void setSize(int size);
	void setNumOfElements(int numOfElements);
	void nullifyLists();

protected:

    /**
    * Define uma Tabela Hash externa para ser controlada.
    * @param hashTable Tabela Hash.
    */
	void setHashTable(HashTable *hashTable);

public:
    /**
    * Construtor que define o número de endereços base da Tabela Hash.
    */
	HashTable(int size);

    /**
    * Construtor padrão.
    */
	HashTable();

	virtual ~HashTable();

    /**
    * Cria tabela Hash com o número de endereços bases especificados em size.
    * @param size Número de endereços base na Tabela Hash.
    */
	void create(int size);

	/**
    * Retorna o número de endereços base na Tabela Hash.
    */
	int getSize();

    /**
    * Retorna o número de registros base na Tabela Hash.
    */
	int getNumOfElements();

    /**
    * Calcula a chave para a palavra contida em word.
    * @param word Palavra de entrada.
    * @return Chave calculada.
    */
	int getHashKey(string word);

    /**
    * Adiciona uma palavra/registro na Tabela Hash.
    * @param word Palavra de entrada.
    */
	void add(string word);

    /**
    * Remove uma palavra/registro da Tabela Hash.
    * @param word Palavra de entrada.
    * @return Verdadeiro caso a palavra exista e tenhas sido removida. Falso caso a palavra não exista na Tabela Hash.
    */
	bool remove(string word);

    /**
    * Obtêm o número de registros em um endereço base da Tabela Hash.
    * @param hashKey Chave da Tabela Hash.
    */
	int getHashKeyElements(int hashKey);

    /**
    * Obtêm a n-ésima palavra/registro contida em um endereço base com chave hashKey.
    * @param hashKey Chave da Tabela Hash.
    * @param n Indice do elemento na lista encadeada.
    */
	string get(int hashKey, int n);
	
    /**
    * Define a função de hash que a tabela deve utilizar para calcular seus endereços base.
    * Por padrão a função WordSumKeyCalc é utilizada.
    * @param hashKeyCalc Função da tabela hash.
    */
	void setHashFunction(HashKeyCalc *hashKeyCalc);
    
    /**
    * Obtêm a função hash atualmente utilizada pela tabela hash.
    * @return Função da tabela hash utilizada.
    */
	HashKeyCalc* getHashFunction();

    /**
    * Verifica se um palavra/registro existe na Tabela Hash.
    * @param word Palavra;
    */
	bool wordExists(string word);

    /**
    * Libera memória.
    */
	void release();
};

#endif
