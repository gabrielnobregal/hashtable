/**
 *  	Permite a escrita e leitura de tabelas hash a partir de arquivos de texto.
 *  	Arquivos de leitura devem possuir uma palavra por linha, sendo o ultimo caractere
 *  	marcado como uma quebra de linha.
 *  	O arquivo de escrita segue o formato da tabela
 *  	hash com encadeamento externo. Todas as palavras contidas em um mesmo endereço base
 *  	são escritas em uma mesma linha de texto. A linha de texto deve ser a mesma do
 *  	endereço base.
 *
 * 	@author Gabriel Nobgrega de Lima
 * 	@version 1.0
 *
 */

#ifndef HASHFILE_H
#define HASHFILE_H

#include <fstream>
#include "HashTable.h"

using namespace std;

class HashFile: public HashTable{

public:

    /**
    * Construtor que define o número de endereços base disponíveis.
    * @param size Número de endereços base(buckets).
    */
	HashFile(int size);

    /**
    * Construtor padrão.
    */
	HashFile();

    /**
    * Construtor que permite controlar uma Tabela Hash externa.
    * @param hashTable Tabela Hash externa.
    * @param size Número de endereços base da tabela externa que se deseja controlar.
    */
	HashFile(HashTable *hashTable, int size);

    /**
    * Lê arquivos de texto formatados com uma palavra por linha. Cada palavra será adicionada em uma Tabela Hash interna.
    * @param filePath Caminho do arquivo.
    * @return Número de palavras contidas no arquivo. Retorna -1 caso ocorra um erro no processe do leitura.
    */
	virtual int read(string filePath);


    /**
    * Escreve a Tabela Hash no arquivo de texto especificado. Cada linha do arquivo será populada por palavras de mesmo endereço base.
    * @param filePath Caminho do arquivo.
    * @return Número de palavras escritas no arquivo. Retorna -1 caso ocorra um erro na escrita.
    */
	virtual int write(string filePath);
};

#endif
