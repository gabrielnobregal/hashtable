/**
 *	Nó utilizado nas listas encadeadas.
 * 
 * 	@author Gabriel Nobgrega de Lima
 * 	@version 1.0
 * 	
 */ 

#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <string>

using namespace std;

class Node{
public:
   /** Palavra do nó. */
    string value; 
	
    /** Próximo nó. */
    Node *next; 

    /**
    *Construtor padrão.
    */
    Node();

    /**
    * Construtor que define a palavra armazenada no nó.
    * @param data Palavra de entrada.
    */
    Node(string data);
};
#endif
