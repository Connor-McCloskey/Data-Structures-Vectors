#include "MyVector.h"
#include <iostream>
using namespace HW4;
using std::cout;
using std::endl;

MyVector::MyVector()
{
	vec = new T[vsize];
}


T MyVector::operator[] (int index)
{
	return vec[index];
}


void MyVector::pop_back()
{
	//Temp dynamic array
	T* temp = new T[vsize - 1];

	//copy over values to temp
	for (int i = 0; i < vsize-1; i++)
	{
		temp[i] = vec[i];
	}

	//decrement vector size
	vsize--;

	//pass values back over to vec
	for (int index = 0; index < vsize; index++)
	{
		vec[index] = temp[index];
	}

	//delete temp
	delete[] temp;

}


void MyVector::push_back(T value)
{
	vec[vsize] = value;
	vsize++;
}


int MyVector::size()
{
	return vsize;
}


bool MyVector::empty()
{
	if (vsize == 0)
		return true;
	else
		return false;
}


int MyVector::search(T Value)
{

	for (int i = 0; i < vsize; i++)
	{
		if (vec[i] == Value)
		{
			return i;
		}
	}

	return -1;
}