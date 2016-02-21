#include "Application.h"

using namespace std;

Application::Application(){
	setCmd("->");
}

Application::~Application(){
    release();
}

int Application::readUserInput(string userText){
	int option;
	cout<<userText;
	cin>>option;

	return option;
}

void Application::setCmd(string cmd){
	this->cmd = cmd;
}

string Application::getCmd(){
	return cmd;
}

void Application::setMainMenu(Menu *menu){
	this->mainMenu = menu;
}

Menu* Application::getMenu(){
	return this->mainMenu;
}

void Application::start(){
	Menu *menu = mainMenu;

	menuStack.push(menu); // Empilha o menu inicial

	Menu *nextMenu; // Menu chamado a partir do menu no topo
	Menu *topMenu;	// Menu no topo
	int userInput=0;

	while(!menuStack.empty()){

		topMenu = menuStack.top();
		menuStack.pop();

		if(menuStack.empty()){
			topMenu->show(NULL, userInput); // Menu inicial
		}else{
			topMenu->show(menuStack.top(), userInput); // Passa o menu solicitante
		}

		userInput = readUserInput(cmd); //Quando subir este texto poderia ser configuravel mas classes bases
		nextMenu = topMenu->onOptionSelected(userInput);

		if(nextMenu != NULL){
			if(nextMenu == topMenu){ // Menu deseja continuar no topo
				menuStack.push(topMenu);
			}else{
				menuStack.push(topMenu); // Empilha menu sobreposto
				menuStack.push(nextMenu); // Empilha menu que se sobrepõe
			}
		}else{
		    delete topMenu;
			topMenu = NULL;
		}
	}
}

void Application::release(){

	while(!menuStack.empty()){
		Menu *menu = menuStack.top();
		menuStack.pop();
		delete menu;
	}

	//delete mainMenu;
}

