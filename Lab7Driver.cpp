//Lab 5 
//Lab7Driver.cpp
//Yikai Peng
//Oct.21

#include "Lab7MyStack.h"
using namespace std;


string stringReversal1(string input)
{
	if (!input.empty())//if the input is not empty
	{
		stack <char> MyStack; // creates a new stack
		for (int i = 0; i < input.size(); i++) //for integer i starting with 0, goes until the size of inputs, increase 1 every time
		{
			MyStack.push(input[i]); //adding all characters from the inputs
		}

		string myString; //create a new string named myString
		for (int i = 0; i < input.size(); i++) //for integer i starting with 0, goes until the size of inputs, increase 1 every time
		{
			myString += MyStack.top();// add one elment "myString" at one end to the stack
			MyStack.pop(); //remove the character from the stack
		}
		return myString; //return the string
	}
	else
	{
		return "";//return empty if the input is empty
	}
}

string stringReversal2(string input)
{
	if (!input.empty())// if input string is empty then no pint in this
	{
	vector<char> vect; //creates a vector
	for (int i = 0; i < input.size(); i++) //for integer i starting with 0, goes until the size of inputs, increase 1 every time
	{
		vect.push_back(input[i]); //adding all characters from the inputs
	}

	string strg; //create a new string named strg
	for (int i = 0; i < input.size(); i++) //for integer i starting with 0, goes until the size of inputs, increase 1 every time
	{
		strg += vect.back(); // add one elment "myString" at one end to the stack
		vect.pop_back(); //remove the character from the stack
	}
		return strg; //return the string
	}
	else
	{
		return "";//return empty if the input is empty
	}
}

string stringReversal3(string input)
{
	if (!input.empty())//if the input is not empty
	{
		list <char> l; // creates a new list
		for (int i = 0; i < input.size(); i++) //for integer i starting with 0, goes until the size of inputs, increase 1 every time
		{
			l.push_back(input[i]); //adding all characters from the inputs
		}

		string myString; //create a new string named myString
		for (int i = 0; i < input.size(); i++) //for integer i starting with 0, goes until the size of inputs, increase 1 every time
		{
			myString += l.back();// add one elment "myString" at one end to the list
			l.pop_back(); //remove the character from the stack
		}
		return myString; //return the string
	}
	else
	{
		return "";//return empty if the input is empty
	}

}

string stringReversal4(string input)
{

	if (!input.empty())//if the input is not empty
	{
		MyStack mys; // creates my stack
		for (int i = 0; i < input.size(); i++) //for integer i starting with 0, goes until the size of inputs, increase 1 every time
		{
			mys.push(input[i]); //adding all characters from the inputs
		}

		string myString; //create a new string named myString
		for (int i = 0; i < input.size(); i++) //for integer i starting with 0, goes until the size of inputs, increase 1 every time
		{
			myString += mys.pull();// add one elment "myString" at one end to my stack
		}
		return myString; //return the string
	}
	else
	{
		return "";//return empty if the input is empty
	}
}

int main()
{
	//performing testing
	cout << "Test" << endl;
	cout << stringReversal1("") << endl;

	string test = "I love swimming.";
	cout << "Orginal is: " << test << endl;

	cout << stringReversal1(test) << endl;
	cout << stringReversal2(test) << endl;
	cout << stringReversal3(test) << endl;
	cout << stringReversal4(test) << endl;

	system("pause");
}

