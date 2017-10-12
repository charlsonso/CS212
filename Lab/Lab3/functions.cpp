#include <string>
#include "functions.h"
using namespace std;



string stringGen(){
	int len = rand() % 15 + 1; // +1 gives us 1-15
	int number;
	string s = "";
	char ch;
	for(int i =0; i<len; i++){
		number = rand()%100;
		if(number<10){ //digit
			s+='0'+number;
		}
		else if (number<20){//special character
			do{
				ch = ' '+rand()%95;
			}while(isalnum(ch));
			s+=ch;
		}
		else{
			if (number<60){
			s+='A'+rand()%26;
			}
			else{
			s+='a'+rand()%26;
			}
		}
	}
	return s;
}

void radixSort(Bin<string>& holdBin, Bin<string> bins[], int numBins, int numString, int lenString){
	for(int i=0; i<lenString;i++){
		for(int j = 0; j<numString;j++){
			string temp = holdBin.removeTop();
			if (temp.length()>i){
				int charAscii = temp[temp.length()-1-i] - 32;
				bins[charAscii].addBottom(temp);
			}else{
				bins[0].addBottom(temp);
			}

		}

		for (int j=0; j<numBins; j++){
			while(!bins[j].isEmpty()){
				string temp = bins[j].removeTop();
				holdBin.addBottom(temp);
			}
		}

	}
}
bool greaterString(string one, string two){
	if (one.length()>two.length()){
		return true;
	}
	else if(one.length()==two.length()){
		int position = 0;
		while(position<one.length()){

			int charOne = one[position];
			int charTwo = two[position];
			if(charOne>charTwo){
				// cout<<one[position]<<charOne<<two[position]<<charTwo<<" one is greater than two"<<endl;
				return true;
			}
			else if(charOne<charTwo){
				return false;
			}
			position++;
		}
		return true;
	}
	else{
		return false;
	}
}

void swap(string* a, string* b){
    string t = *a;
    *a = *b;
    *b = t;
}

int partition (string arr[], int low, int high){
    //current partition
	// cout<<endl<<"currrent quicksorting this partition"<<endl;
    // for(int i=low;i<=high;i++){
    //     	cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    //end

    string pivot = arr[high];
    int i = low;
    int j = high-1;
    while(i<j){
    	while(greaterString(pivot,arr[i])){
    		// cout<<endl<<pivot<<" pivot is greater than "<<arr[i]<<endl;
    		i++;
    	}
    	while(greaterString(arr[j],pivot)){
    		// cout<<endl<<pivot<<" pivot is less than "<<arr[j]<<endl;
    		j--;
    	}
    	if(i<j){
    		// cout<<"swapping index"<<i<<" and "<<j<<" words "<<arr[i]<<" "<<arr[j]<<endl;
    		swap(arr[i],arr[j]);
    	}
    }

    //find pivot position
    int findPivot = low;
    for(int i =low; i<high;i++){
    	if(greaterString(pivot,arr[i])){
    		findPivot++;
    	}
    }
    //move values upwards
    for(int i=high; i>findPivot;i--){
    	arr[i]=arr[i-1];
    }
    //save pivot to pivot index
    arr[findPivot]=pivot;
    //return pivot index
    return findPivot;
}
 

void quickSort(string arr[], int low, int high){
    if (low < high)
    {
        int pi = partition(arr, low, high);
        // cout<<"Partitioned between pivot "<<pi<<": "<<endl;
        // for(int i=low;i<=high;i++){
        // 	cout<<arr[i]<<" ";
        // }
        // cout<<endl<<endl;
        if(low<pi-1)
	        quickSort(arr, low, pi - 1);
        if(high>pi+1)
        	quickSort(arr, pi + 1, high);
    }
}