/**
 *  	Permite a escrita de histogramas de tabelas hash em arquivos de texto. 
 * 
 * 	@author Gabriel Nobgrega de Lima
 * 	@version 1.0
 * 	
 */ 

#ifndef HASHHISTOGRAM_H
#define HASHHISTOGRAM_H

#include "Histogram.h"
#include "HashFile.h"

class HashHistogram: public Histogram{
private:
	HashTable *hashTable;

    /**
    * Retorna o maior número de registros em um endereço base da Tabela Hash.
    * @param hashTable Tabela Hash.
    * @return Número de registros.
    */
	int maxNumOfElements(HashTable *hashTable);

public:
    /**
    * Construtor padrão.
    */
	HashHistogram();

    /**
    * Construtor que define a Tabela Hash.
    * @param hashFile Tabela Hash.
    */
	HashHistogram(HashFile *hashFile);

    /**
    * Construtor que define a Tabela Hash.
    * @param hashTable Tabela Hash.
    */
	HashHistogram(HashTable *hashTable);

	~HashHistogram();
    /**
    * Cria histograma.
    */
	void create();

    /**
    * Cria histograma definindo a Tabela Hash a ser utilizada.
    * @param hashTable Tabela Hash.
    */
	void create(HashTable *hashTable);

    /**
    * Escreve o histograma da Tabela Hash em disco.
    * @param filePath Caminho do arquivo.
    */
	int write(string filePath);

    /**
    * Libera memória.
    */
	void release();

};

#endif
