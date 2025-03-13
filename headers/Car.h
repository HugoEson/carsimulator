#ifndef CAR_H
#define CAR_H

#include <utility>
#include "Room.h"

class Car {
public:
    Car(int x, int y, char direction, Room* room);
    virtual ~Car() = default;
    virtual bool moveForward();
    virtual bool moveBackward();
    virtual void turnLeft();
    virtual void turnRight();

    std::pair<int, int> getPosition() const;
    char getDirection() const; // Changed to return a letter
    bool canMove(const Room& room, int dx, int dy) const; // New method to check if the car can move

protected:
    std::pair<int, int> position;
    std::pair<int, int> direction;
    Room* room; // New member variable to store room reference

private:
    void setDirection(char direction); // Helper method to set direction
};

#endif // CAR_H
