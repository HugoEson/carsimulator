#include "Car.h"
#include "MonsterTruck.h"
#include "Room.h"
#include <iostream>

bool runcommands(Car &car, std::string commands, bool verbose = false)
{
    for (char command : commands)
    {
        switch (command)
        {
        case 'F':
            if (!car.moveForward())
            {
                if (verbose) { std::cout << "Failed to move forward." << std::endl; }
                return false;
            }
            if (verbose) { std::cout << "Moved forward successfully." << std::endl; }
            break;
        case 'B':
            if (!car.moveBackward())
            {
                if (verbose) { std::cout << "Failed to move backward." << std::endl; }
                return false;
            }
            if (verbose) { std::cout << "Moved backward successfully." << std::endl; }
            break;
        case 'L':
            car.turnLeft();
            if (verbose) { std::cout << "Turned left." << std::endl; }
            break;
        case 'R':
            car.turnRight();
            if (verbose) { std::cout << "Turned right." << std::endl; }
            break;
        default:
            if (verbose) { std::cout << "Invalid command: " << command << std::endl; }
            return false;
            break;
        }
    }
    return true;
}

int main()
{
    int roomSizeX, roomSizeY;
    std::cout << "Enter room size (X Y): ";
    std::cin >> roomSizeX >> roomSizeY;
    if (roomSizeX <= 0 || roomSizeY <= 0)
    {
        std::cerr << "Invalid room size. Please enter positive integers." << std::endl;
        return 1;
    }

    int carPosX, carPosY;
    char carDirection;
    std::cout << "Enter car position (X Y) and direction (N/E/S/W): ";
    std::cin >> carPosX >> carPosY >> carDirection;
    if (carPosX < 0 || carPosY < 0 || 
        (carDirection != 'N' && carDirection != 'E' && carDirection != 'S' && carDirection != 'W'))
    {
        std::cerr << "Invalid car position or direction. Ensure position is non-negative and direction is one of N/E/S/W." << std::endl;
        return 1;
    }

    std::string commands;
    std::cout << "Enter commands (F/B/L/R): ";
    std::cin >> commands;
    if (commands.empty() || commands.find_first_not_of("FBLR") != std::string::npos)
    {
        std::cerr << "Invalid commands. Use only F, B, L, R." << std::endl;
        return 1;
    }

    Room room(roomSizeX, roomSizeY);
    MonsterTruck myTruck(carPosX, carPosY, carDirection, room);

    if (runcommands(myTruck, commands))
    {
        std::cout << "Successful run!" << std::endl;
    }
    else
    {
        std::cout << "Failed run!" << std::endl;
        std::cout << "Car ran into wall from position: (" << myTruck.getPosition().first << ", " << myTruck.getPosition().second << ")" << std::endl;
    }

    return 0;
}