#include "Car.h"
#include "MonsterTruck.h"
#include "Room.h"
#include <iostream>

bool runcommands(Car &car, std::string commands)
{
    for (char command : commands)
    {
        switch (command)
        {
        case 'F':
            if (!car.moveForward())
            {
                return false;
            }
            break;
        case 'B':
            if (!car.moveBackward())
            {
                return false;
            }
            break;
        case 'L':
            car.turnLeft();
            break;
        case 'R':
            car.turnRight();
            break;
        default:
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
    if (std::cin.fail() || !std::cin.eof() && std::cin.peek() != '\n' || roomSizeX <= 0 || roomSizeY <= 0)
    {
        std::cerr << "Invalid input. Please enter two positive integers." << std::endl;
        return 1;
    }

    int carPosX, carPosY;
    char carDirection;
    std::cout << "Enter car position (X Y) and direction (N/E/S/W): ";
    std::cin >> carPosX >> carPosY >> carDirection;
    if (std::cin.fail() || !std::cin.eof() && std::cin.peek() != '\n' || carPosX < 0 || carPosY < 0 ||
        (carDirection != 'N' && carDirection != 'E' && carDirection != 'S' && carDirection != 'W'))
    {
        std::cerr << "Invalid car position or direction. Ensure position is non-negative and direction is one of N/E/S/W." << std::endl;
        return 1;
    }

    std::string commands;
    std::cout << "Enter commands (F/B/L/R): ";
    std::cin >> commands;
    if (std::cin.fail() || commands.find_first_not_of("FBLR") != std::string::npos)
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