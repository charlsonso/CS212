#include <iostream>
#include "factorial.h"
#include "factorial.cpp"
using namespace std;

int main()
{
	int n;
	do{
		cout<<"Please enter a number to find the factorial of a number: ";
		cin>>n;
	}while(n<0);
	cout<<factorial(n)<<endl;
	cout<<fact(n)<<endl;

	string line;
	cin>>line;
	WriteBackwards1(line);
	WriteBackwards2(line);
}