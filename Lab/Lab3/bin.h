#ifndef BIN_H
#define BIN_H
#include "Node.h"

template<class ItemType>
class Bin{
	private:
		Node<ItemType>* headPtr;
		Node<ItemType>* tailPtr;
	public:
		Bin();
		void addBottom(ItemType& item);
		ItemType removeTop();
		bool isEmpty();
};

#include "bin.cpp"

#endif