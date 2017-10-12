#ifndef BIN_CPP
#define BIN_CPP
#include "bin.h"

template<class ItemType>
Bin<ItemType>::Bin():headPtr(nullptr),tailPtr(nullptr){
	
}

template<class ItemType>
void Bin<ItemType>::addBottom(ItemType& item){
	Node<ItemType>* newNodePtr = new Node<ItemType>(item);
	if(isEmpty()){
		headPtr=tailPtr=newNodePtr;
	}
	else{
		tailPtr ->setNext(newNodePtr);
		tailPtr = newNodePtr;
	}
}

template<class ItemType>
ItemType Bin<ItemType>::removeTop(){
	ItemType temp;
	if (!isEmpty()){
		temp = headPtr->getItem();
		Node<ItemType>* toDeletePtr = headPtr;
		headPtr = headPtr->getNext();
		delete toDeletePtr;
	}
	return temp;
}

template<class ItemType>
bool Bin<ItemType>::isEmpty(){
	return (headPtr==nullptr);
}

#endif