/*
 * Controller.h
 *
 *  Created on: Jan 19, 2016
 *      Author: smon7958
 */

#ifndef CONTROLLER_CONTROLLER_H_
#define CONTROLLER_CONTROLLER_H_

class Controller
{
private :
	int classCount;
public :
	Controller();
	void setClassCount(int classCount);
	int getClassCount();
	void start();
};



#endif /* CONTROLLER_CONTROLLER_H_ */