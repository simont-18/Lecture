#include "Car.h"

Car::Car():Engine() {}

Car::Car(int s):Engine(s) {}

Car::~Car() {
    cout << "Car decontructor.\n";
}

void Car::print() {
    cout << "Car speed: " << speed << "mph.\n";
}

void Car::drive() {
    cout << "Car is going at a speed of " << Engine::getSpeed() << "mph.\n";
}