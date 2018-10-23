//Lab 5 
//Lab7MyStack.cpp
//Yikai Peng
//Oct.21

#include "Lab7MyStack.h"


MyStack::MyStack()
{
	list<char>MyList; //construction 
}

MyStack::~MyStack()
{
	MyList.clear(); //destruction: clear the list
}

bool MyStack::isEmpty() const
{
	return MyList.empty(); //if the list is empty returns true, otherwise false 
}

void MyStack::push(char & c)
{
	MyList.push_back(c); //push c to list in stack
}

char MyStack::pull()
{
	char top = MyList.back(); //top element
	MyList.pop_back(); //pops the element onto mylist
	return top;//return the character
}


