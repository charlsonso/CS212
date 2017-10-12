#ifndef SETMAIN_CPP
#define SETMAIN_CPP
#include "Set.h"
using namespace std;

// add elements to set1
// add elements to set2
// remove an element from set1
// remove an element from set2
// do a union of set1 and set2 into set3
// do an intersection of set1 and set2 into set3
// print set1, set2, and set3
// quit
// Have the add elements loop and add positive integers until you enter a 0. You can create extra functions (separate from the Set class) to make it easier.

 
int main(){
	Set<int> j;
	cout<<"Added 1,2,3. Expect 1, 1, 1 for added correctly, and 3 for the Current Size: "<<j.add(1)<<j.add(2)<<j.add(3)<<j.getCurrentSize()<<endl;
	cout<<"Is Empty, Should be 0: "<<j.isEmpty()<<endl;
	cout<<"remove 1, should be 1: "<<j.remove(1)<<endl<<"Size should be 2: "<<j.getCurrentSize()<<endl;
	cout<<"Should not contain 1, Expect 0: "<<j.contains(1)<<endl;
	Set<int> k;
	k.add(1);
	k.add(3);
	k.add(5);
	Set<int> l = j+k;
	cout<<"checking union, Should contain 1,2,3,5: "<<l<<endl;
	Set<int> m = j-k;
	cout<<"checking intersection, Should only contain 3: "<<m<<endl;
	

};
#endif