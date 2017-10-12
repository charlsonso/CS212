// Write an infix to postfix converter as described in chapter 6. Use code from chapter 7 to implement a stack (can be array based or linked based).
// Assume:
//             1. variables are single character from a to z (lowercase)
//             2. There are no unary minus or plus
//             3. There are no spaces
// Put in error detection that would detect variables together (like bb+c), operators together (like b++c), or mismatched parenthesis. 
// It is recommended to use a Boolean, like validExp, to signal that the expression is incorrect. Also recommended to use another 
// Boolean to keep track of the type of character gotten from the string, like previousOperand for the fact that a variable had been processed 
// and the next should be an operator: note, with parenthesis, check the previousOperand but do NOT set it. For instance, (a+b) is valid while a(+b) 
// is not – checking that the previousOperand is true would generate an error for a(+b).
// The program should input the infix expression, then either print an error or print the postfix expression.
#include "LinkedStack.h"
// Checks infix expression for variables put together, operators together, mismatched parenthesis, and that a variable is followed by an operand. 
//@pre   - infix expression
//@param - string to be checked if it infix expression
//@post  - returns whether or not the infix expression is true

string inToPost(string exp){
	LinkedStack aStack;
	string postFixExp="";
	for (int i=0; i<exp.length();i++){
		switch(exp[i]){
			case '*': case'-': case '+':case'/': 
				while(!aStack.isEmpty() && aStack.peek()!='('){
					
				}
				break;
		}
	}	

}

int main(){

}

