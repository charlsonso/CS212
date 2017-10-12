#ifndef SET_H
#define SET_H
#include "LinkedBag.h"
#include <string>
using std::string;

template<ItemType>
class Set{
	private:
		LinkedBag<ItemType> bag;
	public:
		Set();
		int getCurrentSize();
		bool isEmpty();
		bool add(const ItemType& newEntry);
		//if !bag.contains(newEntry){bag.add(newEntry)}
		bool remove(const ItemType& anEntry);
		Set operator+(const Set&);//union
		//create a third set, do union/intersection, then return the third set
		//vector a = setA->toVector()
		//vector B = setb->toVector()
		//add all items in A+B to set C
		//no duplicates
		Set operator-(const Set&);//intersection
		friend ostream& operator<<(ostream&, const Set&);
};
#endif