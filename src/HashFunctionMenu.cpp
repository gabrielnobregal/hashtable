#include "HashFunctionMenu.h"


HashFunctionMenu::HashFunctionMenu(HashFile *hashTable):HashAppMenu(hashTable){
  
}

void HashFunctionMenu::show(Screen *parent, int code){
	cout<<"<<Funcao de Hash>>"<<endl;
	cout<<"------------------------"<<endl;
	cout<<"1)Soma de caracteres"<<endl;
	cout<<"2)Multiplicacao de caracteres"<<endl;
	cout<<"------------------------"<<endl;
}

Menu* HashFunctionMenu::onOptionSelected(int userInput){
	
	switch(userInput){
	case 1:
		hashTable->setHashFunction(new WordSumKeyCalc());
		cout<<"Funcao de hash considerando a soma de caracteres ativada..."<<endl;
		return NULL; // Retornar ao menu anterior
		break;

	case 2:
		hashTable->setHashFunction(new WordMultKeyCalc());
		cout<<"Funcao de hash considerando a multiplicacao de caracteres ativada..."<<endl;
		return NULL; // Retornar ao menu anterior
		break;
		
	default:
		return this; // Menu deve continuar no topo
		break;
	}

	return this;
}
