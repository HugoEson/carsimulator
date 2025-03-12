#include "Car.h"

Car::Car(int x, int y, Direction direction) : x(x), y(y), direction(direction) {}

void Car::moveForward() {
    switch (direction) {
        case N: y++; break;
        case S: y--; break;
        case W: x--; break;
        case E: x++; break;
    }
}

void Car::moveBackward() {
    switch (direction) {
        case N: y--; break;
        case S: y++; break;
        case W: x++; break;
        case E: x--; break;
    }
}

void Car::turnLeft() {
    switch (direction) {
        case N: direction = W; break;
        case S: direction = E; break;
        case W: direction = S; break;
        case E: direction = N; break;
    }
}

void Car::turnRight() {
    switch (direction) {
        case N: direction = E; break;
        case S: direction = W; break;
        case W: direction = N; break;
        case E: direction = S; break;
    }
}

int Car::getX() const {
    return x;
}

int Car::getY() const {
    return y;
}
