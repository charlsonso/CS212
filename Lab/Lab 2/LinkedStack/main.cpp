#include <iostream>
#include <string>
#include "LinkedStack.h"

using namespace std;

int main()
{
   StackInterface<string>* stackPtr = new LinkedStack<string>();
   LinkedStack<string>* temp = (LinkedStack<string>*) stackPtr;
   string anItem = "";
   cout << "Enter a string: ";
   cin >> anItem;                    // Read an item
   stackPtr->push(anItem);    // Push item onto stack
   anItem = "Howdy";
   stackPtr->push(anItem);

   temp = new LinkedStack<string>(temp);
   StackInterface<string>* stackPtr2 = temp;

   while (!stackPtr->isEmpty())
   {
	   cout << stackPtr->peek() << endl;
	   stackPtr->pop();
   }
   cout << "Copied stack\n";
   while (!stackPtr2->isEmpty())
   {
	   cout << stackPtr2->peek() << endl;
	   stackPtr2->pop();
   }
   system("pause");
   return 0;
}