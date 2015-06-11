#pragma once
// Author:			Westley Case 
// Assignment:		Project 3
// File:			Stack.h
// Instructor:		Dr. Reza Sanati 
// Class:			CS2420 
// Date Written:	5/30/2015
// Description:		Utilize Stacks and Queue design to read and store file input.
// ======================================================================
#include"Node.h"
// ======================================================================
class Stack
{
public:

	// Stack()
	// Purpose: default constructor, initialize defaults
	// Parameters: none
	// Returns: none
	Stack();

	// push()
	// Purpose: push a node onto the stack
	// Parameters: Node pointer
	// Returns: int error code
	int push(Node*);

	// pop()
	// Purpose: pop a node off of the stack
	// Parameters: none
	// Returns: int error code
	int pop();

	// getTop
	// Purpose: return the top Node
	// Parameters: none
	// Returns: Node pointer
	Node* getTop();

private:
	Node* top;
};

