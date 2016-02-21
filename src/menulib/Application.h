/**
 *	Gerencia os menus de uma aplicação utilizando uma política de pilhas.
 *
 * 	@author Gabriel Nobgrega de Lima
 * 	@version 1.0
 *
 */
#ifndef APPLICATION_H
#define APPLICATION_H

#include <iostream>
#include <string>
#include <stack>
#include "Menu.h"

using namespace std;

class Application{

private:
	Menu *mainMenu;
	string cmd;

protected:
	stack<Menu*> menuStack;

public:

    /**
    * Construtor padrão.
    */
	Application();

	virtual ~Application();

    /**
    *Recebe uma seleção de opção do usuário.
    *@param userText Texto que deve aparecer antes da abertura do prompt.
    */
	int readUserInput(string userText);

    /**
    * Define o texto que deve aparecer no prompt de comando enquanto espera pela entrada do usuário.
    * @param cmd Texto apresentado ao usuário.
    */
	void setCmd(string cmd);

    /**
    * Obtêm o texto que deve aparecer antes do prompt de comando.
    * @return Texto que deve aparecer antes do prompt de comando.
    */
	string getCmd();

    /**
    * Define o menu inicial.
    * @param menu Menu incial.
    */
	void setMainMenu(Menu *menu);

    /**
    * Obtem o menu inicial.
    * @return Menu incial.
    */
	Menu* getMenu();

    /**
    * Inicializa o gerenciamento de menus mostrando inicialmente o menu principal.
    */
	void start();

    /**
    * Libera memória.
    */
	void release();
};

#endif
