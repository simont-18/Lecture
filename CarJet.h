#ifndef __Lecture__CarJet__
#define __Lecture__CarJet__

#include <iostream>
#include "Car.h"
#include "Jet.h"
using namespace std;

class CarJet: public Car, public Jet {
public:
    CarJet();
    CarJet(int);
    ~CarJet();
    void print();
    void drive();
    void fly();
protected:
private:
};

#endif
