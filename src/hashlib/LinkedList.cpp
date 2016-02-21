#include "LinkedList.h"

using namespace std;

void LinkedList::setSize(int size){
	this->sizeOfList = size;
}

LinkedList::LinkedList(){
	head = NULL;
	setSize(0);
}

LinkedList::~LinkedList(){
	release();
}

void LinkedList::add(string value){
	if(head == NULL){ // Lista vazia?
		head = new Node(value);
	}else{
		Node *p = head;
		head = new Node(value);
		head->next = p;
	}

	//Incrementa o número de itens na lista
	setSize(getSize() + 1);
}

string LinkedList::get(int index){

	if(index >= getSize() || index < 0){ // Posição valida?
		return NULL;
	}

	int i = 0;
	
	// Varre todos os elementos da lista
	for(Node* node = head; node != NULL; node = node->next){
		if(i == index){
			return node->value;
		}
		i++;
	}

	return NULL;
}

int LinkedList::getSize(){
	return this->sizeOfList;
}

void LinkedList::clear(){
	const int size = getSize();

	for(int i=0;i<size;i++){
		remove(0);
	}

	setSize(0);
	head=NULL;
}

int LinkedList::remove(int index){

	if(index >= getSize() || index < 0){ // Posição valida?
		return -1;
	}

	if(index == 0){ // Primeiro nó, então atualiza a cabeça da lista!
		Node* p = head;
		head = head->next;
		delete p;
		setSize(getSize() - 1);
		return 1;
	}else{ // Elemento interno, realiza corte do nó e ligamento entre os vizinhos
		int i = 0;
		int previousIndex = index - 1;

		for(Node* node = head; node != NULL; node = node->next){

			if(i == previousIndex){
				Node* p = node->next;
				node->next = p->next;
				delete p;
				setSize(getSize() - 1);
				return 1;
			}
			i++;
		}

	}
	return -1;
}

void LinkedList::release(){
	clear(); // Libera memória de todos os nós
}
