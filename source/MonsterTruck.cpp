#include "MonsterTruck.h"

MonsterTruck::MonsterTruck(int x, int y, Direction direction) : Car(x, y, direction) {}

void MonsterTruck::moveForward() {
    Car::moveForward();
}

void MonsterTruck::moveBackward() {
    Car::moveBackward();
}

void MonsterTruck::turnLeft() {
    Car::turnLeft();
}

void MonsterTruck::turnRight() {
    Car::turnRight();
}
