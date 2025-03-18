#include "Car.h"

Car::Car(int x, int y, char direction, Room &room) : position(std::make_pair(x, y)), room(room)
{
    setDirection(direction);
}

bool Car::tryMove(int dx, int dy)
{
    int newX = position.first + dx;
    int newY = position.second + dy;
    if (room.isPositionInside(newX, newY))
    {
        position.first = newX;
        position.second = newY;
        return true;
    }
    return false;
}

bool Car::moveForward()
{
    return tryMove(direction.first, direction.second);
}

bool Car::moveBackward()
{
    return tryMove(-direction.first, -direction.second);
}

void Car::turnLeft()
{
    int temp = direction.first;
    direction.first = -direction.second;
    direction.second = temp;
}

void Car::turnRight()
{
    int temp = direction.first;
    direction.first = direction.second;
    direction.second = -temp;
}

std::pair<int, int> Car::getPosition() const
{
    return position;
}

char Car::getDirection() const
{
    if (direction == std::make_pair(0, 1))
        return 'N';
    if (direction == std::make_pair(1, 0))
        return 'E';
    if (direction == std::make_pair(0, -1))
        return 'S';
    if (direction == std::make_pair(-1, 0))
        return 'W';
    return 'x';
}

void Car::setDirection(char direction)
{
    if (direction == 'N')
        this->direction = {0, 1};
    else if (direction == 'E')
        this->direction = {1, 0};
    else if (direction == 'S')
        this->direction = {0, -1};
    else if (direction == 'W')
        this->direction = {-1, 0};
}
