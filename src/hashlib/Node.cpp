#include "Node.h"

Node::Node(){
	value = "";
	next = NULL;
}

Node::Node(string data){
	value = data;
	next = NULL;
}
