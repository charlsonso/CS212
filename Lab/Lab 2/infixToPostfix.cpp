#include <string>
#include <cctype>
#include <iostream>
#include "LinkedStack.h"
#include "infixToPostfix.h"

using namespace std;

string InfixToPostfix(string exp, bool& notValid){
	bool previousOperand = false;
	bool parenthesis = false;
	LinkedStack<char> stack;
	string postfix= "";
	for (int i =0; i<exp.length();i++){
		if (isspace(exp[i])) continue;
		else if (isOperator(exp[i])){
			if(!previousOperand || i==exp.length()-1){
				notValid = true;
			}
			else{
				while(!stack.isEmpty()&& stack.peek() != '(' && hasPrecedence(stack.peek(),exp[i])){
					postfix+=stack.peek();
					stack.pop();
				}
				stack.push(exp[i]);
				previousOperand = false;
			}
		}

		//if character is operand
		else if (isOperand(exp[i])){
			if (previousOperand){
				notValid = true;
			}
			else{
				postfix+=tolower(exp[i]);
				previousOperand = true;
			}
		}

		else if (exp[i]=='('){
			if(parenthesis || previousOperand){
				notValid = true;
			}
			else{
				stack.push(exp[i]);
				parenthesis= true;
			}
		}

		else if (exp[i]==')'){
			if(!parenthesis|| !previousOperand)
				notValid = true;
			else{
				while(!stack.isEmpty()&&stack.peek()!='('){
					postfix+=stack.peek();
					stack.pop();
				}
				stack.pop();
				parenthesis = false;
			}
		}
	}

	while (!stack.isEmpty()){
		postfix+=stack.peek();
		stack.pop();
	}
	return postfix;
}

bool isOperand(char x){
	if (isalnum(x)){
		return true;
	}
	else{
		return false;
	}
}

bool isOperator(char x){
	if (x=='*'||x=='+'||x=='/'||x=='='){
		return true;
	}
	return false;
}

int getWeight(char x){
	int weight;
	switch(x){
		case '+':case'-':
			weight =1;
			break;
		case '*':case '/':
			weight =2;
			break;
		case '$':
			weight=3;
			break;
	}
	return weight;
}

int isRightAssociative(char x){
	if(x=='$')
		return true;
	return false;
}
int hasPrecedence(char first, char second){
	int firstWeight = getWeight(first);
	int secondWeight = getWeight(second);

	if(firstWeight == secondWeight){
		if(isRightAssociative(first)){
			return false;
		}
		return true;
		
	}
	return firstWeight >secondWeight? true:false;
}