#include "Header.h"
using namespace std;
int binarySearch(const string anArray[], int first, int last, string target){
	int index;
	if (first > last)
		index = -1;   // target not in original array
	else{// If target is in anArray,// anArray[first] <= target <= anArray[last]
		int mid = first + (last - first) / 2;
		if (target == anArray[mid])
			index = mid; // target found at anArray[mid]
		else if (target < anArray[mid])// Point X
			index = binarySearch(anArray, first, mid -1, target);
		else// Point Y
			index = binarySearch(anArray, mid + 1, last, target);
	} // end if
	return index;
};

void printAry(string ary[], int len){
	for(int index = 0; index<len; index++)
		cout<<ary[index]<<" ";
	cout<<endl;
};

// void bubbleSort(string ary[], int len){
// 	bool swap;
// 	string temp;
// 	int pass = 1;
// 	do{
// 		swap = false;
// 		for(int index=0; index<len-pass;index++){
// 			if(ary[index]>ary[index+1]){
// 				temp = ary[index+1];
// 				ary[index+1]=temp;
// 				swap = true;
// 			}		
// 		}
// 		pass++;
// 	}while(swap);
// };