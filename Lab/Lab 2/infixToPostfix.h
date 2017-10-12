#include <string>
using namespace std;

string InfixToPostfix(string exp, bool& notValid);
bool isOperand(char x);
bool isOperator(char x);
int getWeight(char x);
int isRightAssociative(char x);
int hasPrecedence(char first, char second);