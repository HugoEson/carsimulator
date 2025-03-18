#ifndef CAR_H
#define CAR_H

#include <utility>
#include "Room.h"

class Car
{
public:
    Car(int x, int y, char direction, Room &room);
    virtual ~Car() = default;
    virtual bool tryMove(int dx, int dy);
    virtual bool moveForward();
    virtual bool moveBackward();
    virtual void turnLeft();
    virtual void turnRight();

    std::pair<int, int> getPosition() const;
    char getDirection() const;

protected:
    std::pair<int, int> position;
    std::pair<int, int> direction;
    Room &room;

private:
    void setDirection(char direction);
};

#endif // CAR_H
