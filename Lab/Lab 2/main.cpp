#include <iostream>
#include <string>
#include "infixToPostfix.h"
using namespace std;

int main(){
	string exp;
	bool flag = false;

	do{
		cout<<"Enter Infix Expression (q to quit): ";
		cin>>exp;
		string postfix = InfixToPostfix(exp,flag);
		if(exp!="q"&&!flag){
			cout<<"Output = " <<postfix <<endl;
		}
		else if (exp == "q"){
			cout<<"Quit"<<endl;
		}
		else{
			cout<<"Error incorrect expression"<<endl;
			flag = false;
		}
	}while(exp !="q");
	system("pause");
	return 0;
}