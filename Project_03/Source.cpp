// Author:			Westley Case 
// Assignment:		Project 3
// File:			Source.cpp
// Instructor:		Dr. Reza Sanati 
// Class:			CS2420 
// Date Written:	5/30/2015
// Description:		Utilize Stacks and Queue design to read and store file input.
// ======================================================================
#include"Source.h"
// ======================================================================
int main()
{
	// Create the file stream.
	fstream inFile;
	string fileName;

	cout << "Westley Case\n" << "CS 2420-001\n" << "Program 3 - Stack and Queue\n" << endl;
	while (fileName == "")
	{
		// Create the Stack and Que Objects
		Stack myStack;
		Queue myQueue;
		// Output program information
		cout << "\nEnter the file name you would like to use or quit (q):  ";
		getline(cin, fileName);

		// check if user wants to quit.
		if (fileName == "q")
			break;
		// otherwise try to open the file
		inFile.open(fileName);
		if (inFile)
		{
			// print the messgae to the console "operation	stack	value	result"
			cout << "Operation\tStack\tValue\tResult" << endl;

			while (!inFile.eof())
			{
				string inText;
				// After having read the line need to deliminate it by space.
				getline(inFile, inText);
				string op = "";
				string sData = "";
				int num;
				try
				{
					// read the op code and perform the correct operation
					op = inText.substr(0, inText.find(" "));
					sData = inText.substr(inText.find(" ")+1);
				}
				catch (...)
				{
					cout << "an error occured reading your file, please fix and try again" << endl;
					fileName = "";
					break;
				}
				if (op.size() > 0)
				{
					try
					{
						num = stoi(sData);
					}

					catch (invalid_argument e)
					{
						num = -1;
					}
				}
				else
				{
					cout << "Missing operation code" << endl;
					fileName = "";
					break;
				}

				// Make a switch to run the correct operation
				// get the returned error code
				string code;
				if (op == "pop")
				{
					if (myStack.pop() == 0)
					{
						code = "Success";
					}
					else
					{
						code = "Underflow";
					}
					cout << op << "\t\tstack\t" << "---\t" << code << endl;
				}
				else if (op == "push")
				{
					Node* node = new Node(num);
					if (myStack.push(node) == 0)
					{
						code = "Success";
					}
					else
					{
						code = "Failed";
					}
					cout << op << "\t\tstack\t" << node->getData() << "\t" << code << endl;
				}
				else if (op == "serve")
				{
					int data;
					if (myQueue.serve(data) == 0)
					{
						code = "Success";
					}
					else
					{
						code = "Underflow";
					}
					cout << op << "\t\tQueue\t" << data << "\t" << code << endl;
				}
				else if (op == "append")
				{
					Node* node = new Node(num);
					if (myQueue.append(node) == 0)
					{
						code = "Success";
					}
					else
					{
						code = "Failed";
					}
					cout << op << "\t\tQueue\t" << node->getData() << "\t" << code << endl;
				}
				else
				{
					cout << "The operation name was not recognizable" << endl;
				}
			} //end EOF file Loop
		} // end if(inFile)
		inFile.close();
		// output the contents of the stack and queue as shown in project file.
		int top = 0;
		cout << "Stack" << endl;
		while (top == 0)
		{
			cout << myStack.getTop()->getData() << endl;
			top = myStack.pop();
		}
		
		int end = -1;
		int value;
		cout << "Queue" << endl;
		while (end != 1)
		{
			end = myQueue.serve(value);
			cout << value << endl;
		}
		fileName = "";
	} // end while(filename)
} // end main
