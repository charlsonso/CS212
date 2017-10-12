/** ADT stack: Linked-based implementation
 @file LinkedStack.h */

#ifndef _LINKED_STACK_H
#define _LINKED_STACK_H

#include "StackInterface.h"
#include "Node.h"

template<class ItemType>
class LinkedStack : public StackInterface<ItemType>
{
private:
    Node<ItemType>* topPtr;    // Pointer to first node in chain;
                                                  // this node contains the stack's top

public:
// Constructors and destructor:
    LinkedStack();                  // Default constructor
    LinkedStack(const LinkedStack<ItemType>* aStack);  // Copy constructor
    virtual ~LinkedStack();    // Destructor

// Stack operations:
    bool isEmpty() const;
    bool push(const ItemType& newItem);
    bool pop();
    ItemType peek() const;
    void remove(int n);
}; // end LinkedStack
#include "LinkedStack.cpp"
#endif
