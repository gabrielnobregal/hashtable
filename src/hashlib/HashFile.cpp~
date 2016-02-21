#include "HashFile.h"


HashFile::HashFile(int size):HashTable(size){
}


HashFile::HashFile():HashTable(){
}

HashFile::HashFile(HashTable *hashTable, int size):HashTable(size){
	HashTable::setHashTable(hashTable); // Passa a controlar a tabela hash externa
}

int HashFile::read(string filePath){
	string word;

	// Adiciona as palavras do arquivo na tabela hash
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

			HashTable::add(word);

		}
		inFile.close();
	}else{
		return -1;
	}
	return HashTable::getNumOfElements();
}


int HashFile::write(string filePath){

	ofstream outFile (filePath);

	if (outFile.is_open()){

		for(int i=0; i < HashTable::getSize(); i++){
		    outFile <<"Linha "<<i<<":";
			for(int j=0; j<HashTable::getHashKeyElements(i); j++){
				outFile << HashTable::get(i, j)<< ";";
			}
			outFile << endl;
		}

		outFile.close();

	}else{
		return -1;
	}

	return HashTable::getNumOfElements();
}
