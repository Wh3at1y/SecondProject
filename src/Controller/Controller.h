/*
 * Controller.h
 *
 *  Created on: Jan 19, 2016
 *      Author: smon7958
 */

#ifndef CONTROLLER_CONTROLLER_H_
#define CONTROLLER_CONTROLLER_H_
using namespace std;
#include <string>;

class Controller
{
private :
	int classCount;
public :
	Controller();
	void setClassCount(int classCount);
	int getClassCount();
	void start();
	void setClassName(string className);
};



#endif /* CONTROLLER_CONTROLLER_H_ */
