#include "Room.h"

Room::Room(int sizeX, int sizeY) : sizeX(sizeX), sizeY(sizeY) {}

int Room::getSizeX() const
{
    return sizeX;
}

int Room::getSizeY() const
{
    return sizeY;
}

bool Room::isPositionInside(int x, int y) const
{
    return x >= 0 && x < sizeX && y >= 0 && y < sizeY;
}
