/*
* Controller.cpp
 *
 *  Created on: Jan 19, 2016
 *      Author: smon7958
 */
#include "Controller.h";
#include <iostream>;
#include <string>;
using namespace std;

Controller :: Controller()
{
	this -> classCount = 21;
}

void Controller :: setClassCount(int classCount)
{
	this -> classCount = classCount;
}

void Controller :: setClassName(string className)
{
	this -> className = className;
}

string Controller ::  getClassName()
{	return this -> className;
}
int Controller :: getClassCount()
{
	return this -> classCount;
}

void Controller :: start()
{
	cout <<"Welcome to my second CPP Class this week" << endl;
	cout << "The current value of classCount is " << getClassCount() << endl;
	int newCount;
	cout << "Choose a new number for class " << endl;
	cin >> newCount;

	this -> setClassCount(newCount);
	cout << "The current value of classCount is " << getClassCount() << endl;

	cout << className.append(" D:");
}


\
