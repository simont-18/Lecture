#include "Jet.h"

Jet::Jet():Engine() {}

Jet::Jet(int s):Engine(s) {}

Jet::~Jet() {
    cout << "Jet decontructor.\n";
}

void Jet::print() {
    cout << "Jet speed: " << speed << "mph.\n";
}

void Jet::fly() {
    cout << "Jet is flying at a speed of " << Engine::getSpeed() << "mph.\n";
}