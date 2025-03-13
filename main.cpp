#include "Car.h"
#include "MonsterTruck.h"
#include "Room.h"
#include <iostream>

int main()
{

    // Input room size
    int roomSizeX, roomSizeY;
    std::cout << "Enter room size (X Y): ";
    std::cin >> roomSizeX >> roomSizeY;

    // Input car position and direction
    int carPosX, carPosY;
    char carDirection;
    std::cout << "Enter car position (X Y) and direction (N/E/S/W): ";
    std::cin >> carPosX >> carPosY >> carDirection;

    // Input commands
    std::string commands;
    std::cout << "Enter commands (F/B/L/R): ";
    std::cin >> commands;

    Room room(roomSizeX, roomSizeY);
    std::cout << "*** Room size: " << room.getSizeX() << "x" << room.getSizeY() << std::endl;

    MonsterTruck myTruck(carPosX, carPosY, carDirection, &room); // Facing North

    auto position = myTruck.getPosition();
    char direction = myTruck.getDirection();
    std::cout << "*** Monster truck at position (" << position.first << ", " << position.second << ") facing " << direction << std::endl;

    for (char command : commands) {
        switch (command) {
            case 'F':
                if (myTruck.moveForward()) {
                    std::cout << "Moved forward successfully." << std::endl;
                } else {
                    std::cout << "Failed to move forward." << std::endl;
                }
                break;
            case 'B':
                if (myTruck.moveBackward()) {
                    std::cout << "Moved backward successfully." << std::endl;
                } else {
                    std::cout << "Failed to move backward." << std::endl;
                }
                break;
            case 'L':
                myTruck.turnLeft();
                std::cout << "Turned left." << std::endl;
                break;
            case 'R':
                myTruck.turnRight();
                std::cout << "Turned right." << std::endl;
                break;
            default:
                std::cout << "Invalid command: " << command << std::endl;
                break;
        }
    }

    position = myTruck.getPosition();
    direction = myTruck.getDirection();
    std::cout << "Monster truck at position (" << position.first << ", " << position.second << ") facing " << direction << std::endl;
}