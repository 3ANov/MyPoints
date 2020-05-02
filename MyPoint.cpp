#include "MyPoint.h";
#include "header.h"; 


//конструктор с инициализацией нулевых значений
MyPoint::MyPoint() {
    x_ = 0;
    y_ = 0;
    cout<<"Конструктор 1 сработал \n";
}

//конструктор с инициализацией по заданным данным
MyPoint::MyPoint(float x,float y) {
    x_ = x;
    y_ = y;
    cout<<"Конструктор 2 сработал \n";
}

MyPoint::~MyPoint() {
    cout<<"Сработал деструктор \n";
}


void MyPoint::setX(float x) {
    x_ = x;
}

void MyPoint::setY(float y) {
    y_ = y;
}

void MyPoint::setXY(float x,float y) {
    x_ = x;
    y_ = y;
}

void MyPoint::showXY() {
    cout<<"Координаты точки "<< x_ <<" "<< y_ <<'\n';
}

float MyPoint::getX() {
	return x_;
}

float MyPoint::getY() {
	return y_;
}

