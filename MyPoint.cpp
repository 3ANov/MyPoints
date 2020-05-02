#include "MyPoint.h";
#include "header.h"; 

void MyPoint::setX(float x){
		x_=x;
}

void MyPoint::setY(float y){
		y_=y;
}

void MyPoint::setXY(float x,float y){
		x_=x;
		y_=y;
}

void MyPoint::showXY(){
	cout<<"Координаты точки "<<x_<<" "<<y_<<'\n';
}

float MyPoint::getX(){
	return x_;
}

float MyPoint::getY(){
	return y_;
}

