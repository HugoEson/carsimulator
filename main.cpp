#include "Car.h"
#include "MonsterTruck.h"
#include <iostream>

int main()
{
    MonsterTruck myTruck(0, 0, Car::N);

    myTruck.moveForward();
    myTruck.turnLeft();
    myTruck.moveBackward();
    myTruck.turnRight();
    
    std::cout << "Monster truck at position (" << myTruck.getX() << ", " << myTruck.getY() << ")" << std::endl;
}