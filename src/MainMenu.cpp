#include "MainMenu.h"

void MainMenu::loadHashFromFile(string filePath){
	if(hashExists()){
		int numOfWords = getHash()->read(filePath);

		cout<<endl<<endl;
		if(numOfWords != -1){
			cout<<filePath<<" carregado com sucesso..."<<endl;
			cout<<"Numero de enderecos:"<<getHash()->getSize()<<endl;
			cout<<"Numero de palavras:"<<getHash()->getNumOfElements()<<endl;
		}else{
			cout<<"ERRO: Caminho ou formato de arquivo invalido"<<endl;
		}
		cout<<endl<<endl;
	}
}


MainMenu::MainMenu(HashFile *hashTable):HashAppMenu(hashTable){
	hashCreated = false;
}

void MainMenu::show(Screen *parent, int code){
	cout<<"<<HashApp>>"<<endl;
	cout<<"------------------------"<<endl;
	cout<<"1)Criar tabela hash"<<endl;

	if(hashExists() && getHash()->getSize()>0){
		cout<<"2)Carregar tabela hash a partir de um arquivo"<<endl;
		cout<<"3)Salvar tabela hash"<<endl;
		cout<<"4)Gerar histograma"<<endl;
		cout<<"5)Localizar palavras"<<endl;
		cout<<"6)Editar"<<endl;		
	}
	cout<<"0)Sair"<<endl;
	cout<<"------------------------"<<endl;


}

Menu* MainMenu::onOptionSelected(int userInput){
	string filePath;
	int numOfWords = 0;
	int tableSize = 0;
	HashHistogram *hashHistogram = NULL;

	switch(userInput){
	case 1:
		cout<<"Numero de chaves:";
		cin>>tableSize;
		getHash()->create(tableSize);
		cout<<"Tabela hash criada..."<<endl;
		hashCreated = true;
		return new HashFunctionMenu(hashTable);
		break;

	case 2:
		if(hashCreated){		
			cout<<"Caminho do arquivo:";
			cin.ignore();
			getline(cin, filePath);
			loadHashFromFile(filePath);
		}
		break;

	case 3:
		if(hashCreated){		
			cout<<"Caminho do arquivo:";
			cin.ignore();
			getline(cin, filePath);

			if((numOfWords=getHash()->write(filePath)) !=-1)
				cout<<"Tabela hash com "<<numOfWords<<" palavras salvo com sucesso..."<<endl;else
				cout<<"ERRO: A tabela hash nao pode ser salva..."<<endl;
		}
		break;

	case 4:
		if(hashCreated){		
			cout<<"Caminho do arquivo:";
			cin.ignore();
			getline(cin, filePath);

			hashHistogram = new HashHistogram(getHash());
			hashHistogram->create();
			if(hashHistogram->write(filePath)!=-1)
				cout<<"Histograma gravado com sucesso..."<<endl;else
				cout<<"ERRO: O arquivo nao pode ser gravado..."<<endl;

			delete hashHistogram;
		}

		break;

	case 5:
		if(hashCreated){		
			return new FindHahsWordsMenu(hashTable);
		}
		break;

	case 6:
		if(hashCreated){		
			return new EditHashMenu(hashTable);
		}
		break;
		
	case 7:
		if(hashCreated){		
			return new HashFunctionMenu(hashTable);
		}
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
