/**
 *	Representa uma tela para o gerenciador de menus. A partir dela
 * 	poderia se extender a biblioteca para suportar tipos especificos
 * 	de telas como, telas de dialogos e menus.
 * 
 * 	@author Gabriel Nobgrega de Lima
 * 	@version 1.0
 * 	
 */

#ifndef SCREEN_H
#define SCREEN_H

class Screen{
public:
    /**
    * Chamado quando a tela deve exibir uma tela ao usuário.
    * @param parent Tela que solicitou a exibição.
    * @param code Identificador de requisição. Existem casos onde uma tela pode requisitar a 	     exibição da mesma tela através de múltiplas opções. Este identificador ajuda a diferenciar a origem precisamente.
    * @return Próximo menu a ser mostrado na tela.
    */
	virtual void show(Screen *parent, int code)=0;
};

#endif
