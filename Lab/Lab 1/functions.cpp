#include "functions.h"
#include <iostream>
#include <string>
using namespace std;

void BubbleSort(string arr[], int len){
	bool swapped = true;
	int j=0;
	string temp;
	while(swapped){
		swapped=false;
		j++;
		for(int i=0;i<len-j;i++){
			if(arr[i]>arr[i+1]){
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
				swapped=true;
			}
		}
	}
};
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