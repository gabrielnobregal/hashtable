/**
 *  Implementa o calculo da função de hash considerando a soma dos caracteres.
 *
 *  @author Gabriel Nobgrega de Lima
 *  @version 1.0
 *
 */

#ifndef WORDSUMCALC_H
#define WORDSUMCALC_H

#include <iostream>
#include <string>
#include <stdlib.h>
#include <math.h>

#include "HashKeyCalc.h"

using namespace std;

class WordSumKeyCalc: public HashKeyCalc{

private:
    const double HASH_FACTOR;

public:
    /** Construtor padrão. */	
    WordSumKeyCalc();
    
    /**
    * Função de hash considerando o somatório dos caracteres.
    * @param word Palavra de entrada.
    * @param hashSize Número de endereços base.
    * @return Endereços base.
    */
    int calculateHashKey(string word, int hashSize);
};


#endif
