// Author:			Westley Case 
// Assignment:		Project 3
// File:			Queue.cpp
// Instructor:		Dr. Reza Sanati 
// Class:			CS2420 
// Date Written:	5/30/2015
// Description:		Utilize Stacks and Queue design to read and store file input.
// ======================================================================
#include "Queue.h"
// ======================================================================

Queue::Queue()
{
	front = nullptr;
	rear = nullptr;
}

int Queue::append(Node* _node)
{
	// add to the rear
	if (front == nullptr)
	{
		front = _node;
		front->setNext(nullptr);
		return 0;
	}
	else if (front->getNext() == nullptr)
	{
		front->setNext(_node);
		rear = _node;
		rear->setNext(nullptr);
		return 0;
	}
	else
	{
		rear->setNext(_node);
		rear = _node;
		rear->setNext(nullptr);
		return 0;
	}
}

int Queue::serve(int &_item)
{
	if (front == nullptr)
	{
		return 1; // there is nothing to serve.
	}
	else
	{
		// set the item to the current front to serve.
		_item = front->getData();

		if (front->getNext() == nullptr)
		{
			front = nullptr;
			return 0;
		}
		else
		{
			front = front->getNext();
			return 0;
		}
	}
}