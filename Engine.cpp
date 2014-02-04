#include "Engine.h"

Engine::Engine():speed(0) {}

Engine::Engine(int s):speed(s) {}

Engine::~Engine() {
    cout << "Engine decontructor.\n";
}

void Engine::print() {
   cout << "Engine speed: " << speed << "mph.\n";
}

int Engine::getSpeed() {
    return speed;
}