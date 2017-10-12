#ifndef SET_CPP
#define SET_CPP
#include "Set.h"
#include "LinkedBag.h"
using std::string;

template<class ItemType>
Set<ItemType>::Set(){
};

template<class ItemType>
int Set<ItemType>::getCurrentSize(){
	return bag.getCurrentSize();
};

template<class ItemType>
bool Set<ItemType>::isEmpty(){
	return bag.isEmpty();
};

template<class ItemType>
bool Set<ItemType>::add(const ItemType& newEntry){
	if (bag.contains(newEntry))
		return 0;
	return bag.add(newEntry);
};

template<class ItemType>
bool Set<ItemType>::remove(const ItemType& anEntry){
	return bag.remove(anEntry);
};

template<class ItemType>
vector<ItemType> Set<ItemType>::toVector() const{
	return bag.toVector();
};

template<class ItemType>
bool Set<ItemType>::contains(const ItemType& anEntry) const{
	return bag.contains(anEntry);
};

template<class ItemType>
Set<ItemType> Set<ItemType>::operator+(const Set& set2){
	vector<ItemType> vec1 = bag.toVector();
	vector<ItemType> vec2 = set2.toVector();
	Set<ItemType> answer;

	//walk through second set
	for (int i=0;i<vec2.size();i++){
		//if doesn't contain, add to vec 1
		if (!bag.contains(vec2[i])){
			vec1.push_back(vec2[i]);
		}
	}
	for (int i=0;i<vec1.size();i++){
		answer.add(vec1[i]);
	}

	return answer;

	//in order to add, add all of one bag to new set, then as you add the second set, check to see if it is contained with the first set

};

template<class ItemType>
Set<ItemType> Set<ItemType>::operator-(const Set& set2){
	vector<ItemType> vec1 = bag.toVector();
	vector<ItemType> vec2 = set2.toVector();
	Set<ItemType> answer;
	for(int i =0; i<vec2.size();i++){
		if(bag.contains(vec2[i])){
			answer.add(vec2[i]);
		}
	}
	return answer;
};

#endif