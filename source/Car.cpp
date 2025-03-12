#include "Car.h"

Car::Car(int x, int y, Direction direction) : x(x), y(y), direction(direction) {}

void Car::moveForward() {
    // Empty implementation
}

void Car::moveBackward() {
    // Empty implementation
}

void Car::turnLeft() {
    // Empty implementation
}

void Car::turnRight() {
    // Empty implementation
}

int Car::getX() const {
    return x;
}

int Car::getY() const {
    return y;
}
