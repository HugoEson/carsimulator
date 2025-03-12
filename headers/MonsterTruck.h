#ifndef MONSTERTRUCK_H
#define MONSTERTRUCK_H

#include "Car.h"

class MonsterTruck : public Car {
public:
    MonsterTruck(int x, int y, Direction direction);
    void moveForward() override;
    void moveBackward() override;
    void turnLeft() override;
    void turnRight() override;
};

#endif // MONSTERTRUCK_H
