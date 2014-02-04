#ifndef __Lecture__Car__
#define __Lecture__Car__

#include <iostream>
#include "Engine.h"
using namespace std;

class Car:public Engine {
public:
    Car();
    Car(int);
    ~Car();
    void print();
    void drive();
protected:
private:
};

#endif
