/**
 *	Representa um menu para o gerenciador de menus.
 * 
 * 	@author Gabriel Nobgrega de Lima
 * 	@version 1.0
 * 	
 */
#ifndef MENU_H
#define MENU_H

#include "Screen.h"

class Menu: public Screen{

public:

    /**
    * Chamado quando o usuário entra com uma opção de menu através do teclado.
    * @param userInpute Opção selecionada pelo usuário.
    * @return Próximo menu a ser mostrado na tela.
    */
	virtual Menu* onOptionSelected(int userInput)=0;
};

#endif
