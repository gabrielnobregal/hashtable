/**
 *  	Interface para a implementação de funções de hash da classe HashTable.
 *
 * 	@author Gabriel Nobgrega de Lima
 * 	@version 1.0
 *
 */

#ifndef HASHKEYCALC_H
#define HASHKEYCALC_H


using namespace std;

class HashKeyCalc{

public:
    /**
    * Função de hash.
    * @param word Palavra de entrada.
    * @param hashSize Número de endereços base.
    * @return Endereços base.
    */
    virtual int calculateHashKey(string word, int hashSize) = 0;
};


#endif
