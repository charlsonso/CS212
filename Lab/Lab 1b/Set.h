#ifndef SET_H
#define SET_H
#include "LinkedBag.h"
#include <string>
using namespace std;
#include <iostream>

template<class ItemType>
class Set{
	private:
		LinkedBag<ItemType> bag;
	public:
		Set();
		int getCurrentSize();
		bool isEmpty();
		bool add(const ItemType& newEntry);
		bool remove(const ItemType& anEntry);
		vector<ItemType> toVector() const;
		bool contains(const ItemType& anEntry) const;
		Set operator+(const Set&);//union
		Set operator-(const Set&);//intersection
		friend ostream& operator<<(ostream& os, const Set& current){
			vector<ItemType> vectorSet = current.toVector();
			for (int i=0; i<vectorSet.size();i++){
				os<<vectorSet[i];
			}
			return os;
		};
		
};
#include "Set.cpp"
#endif