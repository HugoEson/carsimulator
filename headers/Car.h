#ifndef CAR_H
#define CAR_H

#include <utility>

class Car {
public:
    Car(int x, int y, char direction);
    virtual ~Car() = default;
    virtual void moveForward() = 0;
    virtual void moveBackward() = 0;
    virtual void turnLeft() = 0;
    virtual void turnRight() = 0;

    std::pair<int, int> getPosition() const;
    char getDirection() const; // Changed to return a letter

protected:
    std::pair<int, int> position;
    std::pair<int, int> direction;

private:
    void setDirection(char direction); // Helper method to set direction
};

#endif // CAR_H
