#pragma once
// Author:			Westley Case 
// Assignment:		Project 3
// File:			Queue.h
// Instructor:		Dr. Reza Sanati 
// Class:			CS2420 
// Date Written:	5/30/2015
// Description:		Utilize Stacks and Queue design to read and store file input.
// ======================================================================
#include"Node.h"
// ======================================================================
class Queue
{
public:
	// Queue()
	// Purpose: initialize the default constructer
	// Parameters: None
	// Returns: None
	Queue();

	// append()
	// Purpose: add a node to the end of the Queue
	// Parameters: Node pointer
	// Returns: int error code
	int append(Node*);

	// serve()
	// Purpose: serve up the front node
	// Parameters: int by referance to return the nodes data
	// Returns: int error code
	int serve(int&);
private:
	Node* front;
	Node* rear;
};

