#Makefile para a construção do projeto Lab01
#Criado por: Gabriel Nobrega de Lima
#Disciplina: Algoritmo e Estrutura de Dados
#Data: 19/09/2012

HASHLIB=hashlib/
HASHLIBTEST=hashlib/tests/
MENULIB=menulib/

CC=g++

all: main LinkedListTest HashTableTest HashHistogramTest HashFileTest
	$(CC) main.o HashApp.o Application.o HashAppMenu.o HashFunctionMenu.o MainMenu.o EditHashMenu.o FindHashWordsMenu.o RemoveHashMenu.o HashHistogram.o HashFile.o HashTable.o Node.o LinkedList.o Histogram.o LinkedListTest.o HashTableTest.o HashHistogramTest.o HashFileTest.o WordSumKeyCalc.o WordMultKeyCalc.o -o hashapp

main:HashApp
	$(CC) -c main.cpp

HashApp:Application 
	$(CC) -c HashApp.cpp

Application: MainMenu HashFile EditHashMenu FindHashWordsMenu RemoveHashMenu HashFunctionMenu
	$(CC) -c $(MENULIB)Application.cpp

#Depedências da interface com usuário
MainMenu: HashFile HashHistogram HashAppMenu HashFunctionMenu
	$(CC) -c MainMenu.cpp

EditHashMenu: HashFile HashAppMenu
	$(CC) -c EditHashMenu.cpp

FindHashWordsMenu: HashFile HashAppMenu
	$(CC) -c -std=c++0x FindHashWordsMenu.cpp

RemoveHashMenu: HashFile HashAppMenu
	$(CC) -c -std=c++0x RemoveHashMenu.cpp

HashAppMenu: HashFile
	$(CC) -c HashAppMenu.cpp

HashFunctionMenu: HashFile HashAppMenu
	$(CC) -c HashFunctionMenu.cpp	

#Dependências da estrutura de dados

HashHistogram: HashFile Histogram
	$(CC) -c -std=c++0x $(HASHLIB)HashHistogram.cpp

HashFile: HashTable
	$(CC) -c -std=c++0x $(HASHLIB)HashFile.cpp

HashTable: LinkedList WordSumKeyCalc WordMultKeyCalc
	$(CC) -c $(HASHLIB)HashTable.cpp

LinkedList: Node
	$(CC) -c $(HASHLIB)LinkedList.cpp

Histogram:
	$(CC) -c $(HASHLIB)Histogram.cpp

Node:
	$(CC) -c $(HASHLIB)Node.cpp

WordSumKeyCalc: 
	$(CC) -c $(HASHLIB)WordSumKeyCalc.cpp

WordMultKeyCalc: 
	$(CC) -c $(HASHLIB)WordMultKeyCalc.cpp

#Dependências de testes
LinkedListTest: LinkedList
	$(CC) -c $(HASHLIBTEST)LinkedListTest.cpp
	
HashTableTest: HashTable
	$(CC) -c $(HASHLIBTEST)HashTableTest.cpp

HashHistogramTest: HashHistogram
	$(CC) -c $(HASHLIBTEST)HashHistogramTest.cpp

HashFileTest: HashFile
	$(CC) -c $(HASHLIBTEST)HashFileTest.cpp

clear:
	rm *.o hashapp
