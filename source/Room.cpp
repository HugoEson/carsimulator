#include "Room.h"

Room::Room(int sizeX, int sizeY) : sizeX(sizeX), sizeY(sizeY) {}

int Room::getSizeX() const {
    return sizeX;
}

int Room::getSizeY() const {
    return sizeY;
}
