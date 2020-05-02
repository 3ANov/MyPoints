#include "header.h";
#ifndef _MYPOINT_H
#define _MYPOINT_H


class MyPoint {
	float x_,y_;

public:
	void setX(float x);
	void setY(float y);
	void setXY(float x,float y);
	void showXY();
	float getX();
	float getY();
	
    MyPoint();

    MyPoint(float x,float y);

    ~MyPoint();
};
#endif
