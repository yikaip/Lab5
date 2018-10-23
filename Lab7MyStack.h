//Lab 5 
//Lab7MyStack.h
//Yikai Peng
//Oct.21

#ifndef MY_STACK_H
#define MY_STACK_H
#include <iostream>
#include <string>
#include <stack>
#include <list>
#include <vector>
using namespace std;

class MyStack
{
public:
	//function prototype
	MyStack(); //cons
	~MyStack(); //destr
	bool isEmpty() const; 
	void push(char& c);
	char pull();
private:
	list <char> MyList;
};
#endif