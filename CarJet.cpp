#include "CarJet.h"

CarJet::CarJet():Car(0), Jet(0) {}

CarJet::CarJet(int s):Car(s), Jet(s) {}

CarJet::~CarJet() {
    cout << "CarJet decontructor.\n";
}

void CarJet::print() {
    cout << "CarJet speed: " << Car::speed << "mph.\n";
}

void CarJet::drive() {
    cout << "CarJet is going at a speed of " << Car::speed << "mph.\n";
}

void CarJet::fly() {
    cout << "CarJet is flying at a speed of " << Jet::speed << "mph.\n";
}