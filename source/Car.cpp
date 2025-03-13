#include "Car.h"

Car::Car(int x, int y, char direction) : position(std::make_pair(x, y)) {
    setDirection(direction);
}

void Car::moveForward() {
    position.first += direction.first;
    position.second += direction.second;
}

void Car::moveBackward() {
    position.first -= direction.first;
    position.second -= direction.second;
}

void Car::turnLeft() {
    int temp = direction.first;
    direction.first = -direction.second;
    direction.second = temp;
}

void Car::turnRight() {
    int temp = direction.first;
    direction.first = direction.second;
    direction.second = -temp;
}

std::pair<int, int> Car::getPosition() const {
    return position;
}

char Car::getDirection() const {
    if (direction == std::make_pair(0, 1)) return 'N';
    if (direction == std::make_pair(1, 0)) return 'E';
    if (direction == std::make_pair(0, -1)) return 'S';
    if (direction == std::make_pair(-1, 0)) return 'W';
    return 'N'; // Default case, should not happen
}

void Car::setDirection(char direction) {
    if (direction == 'N') this->direction = {0, 1};
    else if (direction == 'E') this->direction = {1, 0};
    else if (direction == 'S') this->direction = {0, -1};
    else if (direction == 'W') this->direction = {-1, 0};
}
