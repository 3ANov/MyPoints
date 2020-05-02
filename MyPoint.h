#include "header.h";
#ifndef _MYPOINT_H
#define _MYPOINT_H


class MyPoint{
	float x_,y_;

public:
	void setX(float x);
	void setY(float y);
	void setXY(float x,float y);
	void showXY();
	float getX();
	float getY();
	
	MyPoint(){x_=0; y_=0; cout<<"Конструктор 1 сработал \n";}//конструктор с инициализацией нулевых значений

	MyPoint(float x,float y){x_=x; y_=y; cout<<"Конструктор 2 сработал \n";}//конструктор с инициализацией по заданным данным 

	~MyPoint(){cout<<"Сработал деструктор \n";}
};
#endif
