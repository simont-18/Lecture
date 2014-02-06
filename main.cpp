#include <iostream>
#include "Engine.h"
#include "Car.h"
#include "Jet.h"
#include "CarJet.h"
using namespace std;

int main() {
    Car c(1);
    c.print();
    cout << endl;
    
    Jet j(2);
    j.Engine::print();
    cout << endl;
    
    CarJet cj(3);
    cj.print();
    cout << endl;
    
    return 0;
}