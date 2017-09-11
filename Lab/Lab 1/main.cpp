//main.cpp: input file name:
//use function fileSearch, return array
//save array, do binary search, prompt: find word to find(quit to exit)
#include "functions.h"
#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream inFile;
	string fileName;
	string item;
	int count=0;
	string arr[50];
	string word;
	cout<<"Enter Filename: "<<endl;
	getline(cin, fileName);
	inFile.open(fileName.c_str());
	if(inFile.fail()){
		cout<<"Could not open "<<fileName<<endl;
	}else{
		
		while(inFile>>item){
			arr[count]=item;
			count++;

		}
	}
	BubbleSort(arr, count);
	for(int i = 0; i<count;i++)
		cout<<arr[i]<<endl;	

	
	do{
		cout<<"Word to find (\"quit\" to exit): ";
		cin>>word;
		int index = binarySearch(arr,0,count,word);
		if(word=="quit"){
			
		}
		else if (index==-1){
			cout<<"Word "<<word<<" not found."<<endl;
		}

		else{
			cout<<"Word "<<word<<" is at location "<<index<<endl;
		}
	}while(word!="quit");

}