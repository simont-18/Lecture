#ifndef __Lecture__Engine__
#define __Lecture__Engine__

#include <iostream>
using namespace std;

class Engine {
    int x = 2;
public:
    Engine();
    Engine(int);
    ~Engine();
    void print();
    int getSpeed();
protected:
    int speed;
private:
};

#endif
