#include "FindHashWordsMenu.h"

void FindHahsWordsMenu::showWordPos(string word){
	int hashKey = getHash()->getHashKey(word);

	int x = hashKey;
	int y = 0;

	//Percorre todos os elementos contidos em um endereço base
	for(y=0; y<getHash()->getHashKeyElements(hashKey); y++){
		if(getHash()->get(x, y).compare(word) == 0){
			break;	
		}
	}		
	string str = getHash()->wordExists(word) ?  "" : "-1";
	cout<<word<<"  "<<x<<"  "<<y<<"  "<<str<<endl;
}

int FindHahsWordsMenu::loadWordFromFile(string filePath){
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

			showWordPos(word);
			numOfWords++;
		}
		inFile.close();
	}else{		  
		return -1;
	}

	return numOfWords;
}



FindHahsWordsMenu::FindHahsWordsMenu(HashFile *hashTable):HashAppMenu(hashTable){		
}


void FindHahsWordsMenu::show(Screen *parent, int code){
	cout<<"<<Busca>>"<<endl;
	cout<<"------------------------"<<endl;
	cout<<"1)Buscar palavra"<<endl;
	cout<<"2)Buscar palavras do arquivo"<<endl;
	cout<<"0)Voltar"<<endl;
	cout<<"------------------------"<<endl;


}

Menu* FindHahsWordsMenu::onOptionSelected(int userInput){

	string word;
	string filePath;
	int numOfWords=0;

	switch(userInput){
	case 1:
		cout<<"Palavra:"; 
		
		cin.ignore();
		getline(cin,word);
		showWordPos(word);
		return this; //Menu deve continuar no topo

		break;

	case 2:
		cout<<"Caminho do arquivo:";
		cin.ignore();
		getline(cin, filePath);
		cout<<endl;
		if( (numOfWords = loadWordFromFile(filePath)) != -1)
			cout<<"Total de palavras pesquisadas:"<<numOfWords<<endl;else
			cout<<"ERRO: Arquivo nao pode ser lido..."<<endl;

		return this; //Menu deve continuar no topo
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
