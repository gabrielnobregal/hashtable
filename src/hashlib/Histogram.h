/**
 *  	Permite a escrita de histogramas de tabelas hash em arquivos de texto. 
 *  
 * 
 * 	@author Gabriel Nobgrega de Lima
 * 	@version 1.0
 * 	
 */ 

#ifndef HISTOGRAM_H
#define HISTOGRAM_H

#include <iostream>

class Histogram{
private:
	int *element; // Vetor de lementos do histograma
	int size; // Tamanho do histograma

	/**
	* Define todos os elementos do histograma para valor 0.
	*/
	void clearElements();

protected:

    /**
    * Define o tamanho do histograma.
    * @param size Tamanho do histograma.
    */
	void setSize(int size);

public:
    /**
    * Construtor que define o tamanho do histograma.
    */
	Histogram(int size);

    /**
    * Construtor padrão.
    */
	Histogram();
	virtual ~Histogram();

    /**
    * Cria histograma com o tamnho especificado.
    * @param size Tamanho do histograma.
    */
	virtual void create(int size);

    /**
    * Adiciona um valor ao histograma. Caso este valor seja maior que o tamanho do histograma nada ocorrerá.
    */
	void add(int value);

	/**
    * Obtem o tamanho do histograma.
    */
	int getSize();

    /**
    * Obtem o número de ocorrência de um valor do histograma.
    * @param value Valor.
    */
	int get(int value);

	/**
    * Libera memória.
    */
	void release();
};


#endif
