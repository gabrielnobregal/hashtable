/**
 * Implementa o calculo da função de hash considerando a multiplicação dos caracteres.
 *
 * @author Gabriel Nobgrega de Lima
 * @version 1.0
 *
 */

#ifndef WORDMULTCALC_H
#define WORDMULTCALC_H

#include <iostream>
#include <string>
#include <stdlib.h>
#include <math.h>

#include "HashKeyCalc.h"

using namespace std;

class WordMultKeyCalc: public HashKeyCalc{
private:
    const double HASH_FACTOR;
public:
    /** Construtor padrão. */	
    WordMultKeyCalc();

   /**
    * Função de hash considerando o produtório dos caracteres.
    * @param word Palavra de entrada.
    * @param hashSize Número de endereços base.
    * @return Endereços base.
    */
    int calculateHashKey(string word, int hashSize);
};


#endif
