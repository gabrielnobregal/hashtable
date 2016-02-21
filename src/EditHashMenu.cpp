#include "EditHashMenu.h"

EditHashMenu::EditHashMenu(HashFile *hashTable):HashAppMenu(hashTable){		
}

void EditHashMenu::show(Screen *parent, int code){
	cout<<"<<Edicao>>"<<endl;
	cout<<"------------------------"<<endl;
	cout<<"1)Adicionar palavra"<<endl;
	cout<<"2)Remover palavras"<<endl;		
	cout<<"0)Voltar"<<endl;
	cout<<"------------------------"<<endl;
}

Menu* EditHashMenu::onOptionSelected(int userInput){
	string word;
	
	switch(userInput){
	case 1:
		cout<<"Palavra:";
		cin.ignore();
		getline(cin, word);
		getHash()->add(word);
		cout<<"Palavra \""<<word<<"\""<< " adicionada..."<<endl;
	break;
		
	case 2:
		return new RemoveHashMenu(hashTable);
	break;

	case 0:
		return NULL; // Menu deve ser fechado
	break;

	default:
		return this; // Menu deve continuar no topo
	break;
	}

	return this;
}
