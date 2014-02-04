#ifndef __Lecture__Jet__
#define __Lecture__Jet__

#include <iostream>
#include "Engine.h"
using namespace std;

class Jet:public Engine {
public:
    Jet();
    Jet(int);
    ~Jet();
    void print();
    void fly();
protected:
private:
};

#endif
