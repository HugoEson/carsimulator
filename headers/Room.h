#ifndef ROOM_H
#define ROOM_H

class Room {
public:
    Room(int sizeX, int sizeY);
    int getSizeX() const;
    int getSizeY() const;
    bool isPositionInside(int x, int y) const;

private:
    int sizeX, sizeY;
};

#endif // ROOM_H
