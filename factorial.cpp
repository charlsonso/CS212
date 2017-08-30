#include "factorial.h"
#include <iostream>

using namespace std;
//can you namespace std in cpp file not in main file.

int factorial(int n){
	if (n==1){
		return 1;
	}
	else{
		return n*factorial(n-1);
	}
}

int fact(int n){
	int answer =1;
	for(int i =1; i<=n;i++){
		answer*=i;
	}
	return answer;
}

void WriteBackwards1(string s){
	if (s.length()==0)
		return;
	cout<<s.substr(s.length()-1,1);
	WriteBackwards1(s.substr(0,s.length()-1));
}
void WriteBackwards2(string s){
	if (s.length()==0)
		return;
	WriteBackwards2(s.substr(0,s.length()-1));
	cout<<s.substr(s.length()-1,1);
	
}

/*Header File. Main File. Function File*/
