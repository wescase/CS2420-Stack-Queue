#pragma once
// Author:			Westley Case 
// Assignment:		Project 3
// File:			Node.h
// Instructor:		Dr. Reza Sanati 
// Class:			CS2420 
// Date Written:	5/30/2015
// Description:		Utilize Stacks and Queue design to read and store file input.
// ======================================================================

class Node
{
public:
	// Node()
	// Purpose: Default constructor for Node's
	// Parameters: None
	// Returns: None
	Node();

	// Node(int):
	// Purpose: Constructor to set default data.
	// Parameters: int Node_data
	// Returns: none
	Node(int);

	// getData()
	// Purpose: getter for the data property
	// Parameters: none
	// Returns: int
	int getData() const;

	// getNext()
	// Purpose: getter for the next property
	// Parameters: none
	// Returns: Node pointer to next Node in the list
	Node* getNext() const;

	// getPrevious()
	// Purpose: getter for the previous property
	// Parameters: none
	// Returns: Node pointer to the previous Node in the list
	Node* getPrevious() const;

	// setData(int)
	// Purpose: setter for the data property
	// Parameters: int 
	// Returns: void
	void setData(int);

	// setNext(Node*)
	// Purpose: setter for the next Node in the list
	// Parameters: Node pointer
	// Returns: void
	void setNext(Node*);

	// setPrevious(Node*)
	// Purpose: setter for the previous Node in the list
	// Parameters: Node pointer
	// Returns: void
	void setPrevious(Node*);
private:
	int data;
	Node* next;
	Node* previous;
};

