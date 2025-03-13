#ifndef MONSTERTRUCK_H
#define MONSTERTRUCK_H

#include "Car.h"

class MonsterTruck : public Car {
public:
    MonsterTruck(int x, int y, char direction, Room& room);
};

#endif // MONSTERTRUCK_H
