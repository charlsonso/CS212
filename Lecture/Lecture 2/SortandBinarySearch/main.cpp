#include <string>
#include <iostream>
#include "Header.h"
using namespace std;
int main(){
	string cats[] = {"felix","garfield","rufus","thomas","blackie","snuggles","hi","bye","annie","vaneh"};
	string cat;
	int index;
	const int length = 10;

	cout<<"unsorted ";
	printAry(cats,length);
	// bubbleSort(cats,length);
	// cout<<"sorted ";
	// printAry(cats, length);
	// do{
	// 		cout<<"Name to search for?"<<endl;
	// 		cin>>cat;
	// 		if(cat!="quit"){
	// 			index = binarySearch(cats, 0,6,cat);
	// 			if (index!= -1){
	// 				cout<< cat<<" at position "<<index<< endl;
	// 			}
	// 			else
	// 				cout<<"Did not find "<<cat<<endl;
	// 		}
	// }while(cat!="quit");
}