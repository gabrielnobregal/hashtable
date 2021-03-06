#include "RemoveHashMenu.h"

void RemoveHashMenu::removeWord(string word){

	if(getHash()->remove(word))
		cout<<"Palavra \""<<word<<"\""<< " removida com sucesso..."<<endl;else
		cout<<"Palavra \""<<word<<"\""<< " nao encontrada..."<<endl;
}

int RemoveHashMenu::removeWordFromFile(string filePath){
	string word;
	int numOfWords = 0;

	ifstream inFile (filePath);
	if (inFile.is_open()){

		while (inFile.good()){
			
			getline (inFile, word);		
	

			if(word.length()>1 && !inFile.eof()){
			    // Remove o caractere '\r' de arquivos de texto criados no windows(\r\n)
			    // Isto evita que uma palavra adicione \r ao final quando um arquivo de texto
			    // criado no windows for utilizado.
			    if(word.at(word.length()-1) == '\r'){
			      string::iterator it = word.end()-1;
			      word.erase(it);
			    }

			}else{
			    break;
			}
			
			
			removeWord(word);
			numOfWords++;
			
		}
		inFile.close();
	}else{		  
		return -1;
	}

	return numOfWords;
}


RemoveHashMenu::RemoveHashMenu(HashFile *hashTable):HashAppMenu(hashTable){		
}


void RemoveHashMenu::show(Screen *parent, int code){

	cout<<"<<Remocao>>"<<endl;
	cout<<"------------------------"<<endl;
	cout<<"1)Remover palavra"<<endl;
	cout<<"2)Remover palavras a partir do arquivo"<<endl;
	cout<<"0)Voltar"<<endl;
	cout<<"------------------------"<<endl;		

}

Menu* RemoveHashMenu::onOptionSelected(int userInput){

	string word;
	string filePath;
	int numOfWords=0;

	switch(userInput){
	case 1:
		cout<<"Palavra:"; 
		cin.ignore();
		getline(cin, word);

		if(getHash()->remove(word))
			cout<<"Palavra \""<<word<<"\" removida com sucesso..."<<endl;else
			cout<<"Palavra \""<<word<<"\" nao encontrada..."<<endl;
		return this; //Menu deve continuar no topo

		break;

	case 2:
		cout<<"Caminho do arquivo:"; 
		cin.ignore();
		getline(cin, filePath);
		if(removeWordFromFile(filePath)<0){
			cout<<"Arquivo \""<<filePath<<"\" nao encontrado..."<<endl;			
		}
		return this;;
		break;

	case 0:				
		return NULL; // Menu deve ser fechado
		break;

	default:
		return this; // Menu deve continuar no topo
		break;
	}

	return NULL;
}
