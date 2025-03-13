#include "Car.h"
#include "MonsterTruck.h"
#include <iostream>

int main()
{
    MonsterTruck myTruck(0, 0, 'N'); // Facing North

    auto position = myTruck.getPosition();
    char direction = myTruck.getDirection();
    std::cout << "Monster truck at position (" << position.first << ", " << position.second << ") facing " << direction << std::endl;

    myTruck.moveForward();
    myTruck.turnLeft();
    myTruck.moveBackward();
    myTruck.turnRight();
    
    position = myTruck.getPosition();
    direction = myTruck.getDirection();
    std::cout << "Monster truck at position (" << position.first << ", " << position.second << ") facing " << direction << std::endl;
}