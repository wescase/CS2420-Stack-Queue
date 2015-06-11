// Author:			Westley Case 
// Assignment:		Project 3
// File:			Stack.cpp
// Instructor:		Dr. Reza Sanati 
// Class:			CS2420 
// Date Written:	5/30/2015
// Description:		Utilize Stacks and Queue design to read and store file input.
// ======================================================================
#include "Stack.h"
// ======================================================================

Stack::Stack()
{
	top = nullptr;
}

int Stack::push(Node* _node)
{
	if (top == nullptr)
	{
		_node->setNext(nullptr);
		top = _node;
		return 0;
	}
	else
	{
		// new nodes next must be set to current top
		_node->setNext(top);
		top = _node;
		return 0; // success:
	}
}

int Stack::pop()
{
	if (top->getNext() != nullptr)
	{
		// set top to its Node's next.
		top = top->getNext();
		return 0; // success:
	}
	return 1; // error: the stack it empty nothing to pop
}

Node* Stack::getTop()
{
	return top;
}