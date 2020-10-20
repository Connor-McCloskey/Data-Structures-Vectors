/*	
	Driver File
	NAME: Connor McCloskey
	LAST DATE MODIFIED : 02 / 15 / 2017
	ASSIGNMENT : Data Structures Homework 4
	DESCRIPTION : This program creates a MyVector class using dynamic memory allocation
	STATUS : COMPLETE
	COMMENTS : Program compiles and should run to specifications
*/

#include "MyVector.h"
#include <iostream>

using namespace HW4;
using std::cout;
using std::endl;
using std::cin;

int main()
{
	//Variables used for testing
	int userInput;
	int searchValue;
	int returnedIndex;
	MyVector test;

	//Testing push_back, including user-entered value
	test.push_back(10);
	cout << "Pushback test for test at 0: " << test[0] << endl;
	cout << "Second pushback..." << endl;
	test.push_back(20);
	cout << "Pushback at 1: " << test[1] << endl;
	cout << test.size() << endl;
	cout << "Third pushback. Enter value: ";
	cin >> userInput;
	test.push_back(userInput);
	cout << "Printing..." << endl;
	cout << test[2] << endl;

	//Testing to see if vector is empty
	cout << "Test to see if vector is empty..." << endl;
	bool empty = test.empty();
	if (empty == true)
	{
		cout << "Vector is empty" << endl;
	}
	if (empty == false)
	{
		cout << "Vector has values" << endl;
	}

	//Test for search function
	cout << "Beginning test for search function..." << endl;
	cout << "Enter search term: ";
	cin >> searchValue;
	returnedIndex = test.search(searchValue);
	if (returnedIndex == -1)
	{
		cout << "Value not found." << endl;
	}
	else
	{
		cout << "Value found at index " << returnedIndex << endl;
	}

	//Testing pop_back
	cout << "Pop back test..." << endl;
	test.pop_back();
	int size = test.size();
	cout << "Value at back: " << test[size-1] << endl;

	//Testing push_back, post pop_back
	test.push_back(40);
	int newSize = test.size();
	cout << "New push back test: " << test[newSize - 1] << endl;
}