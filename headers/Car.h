#ifndef CAR_H
#define CAR_H

class Car {
public:
    enum Direction { N, S, W, E };

    Car(int x, int y, Direction direction);
    virtual ~Car() = default;
    virtual void moveForward() = 0;
    virtual void moveBackward() = 0;
    virtual void turnLeft() = 0;
    virtual void turnRight() = 0;

    int getX() const;
    int getY() const;

protected:
    int diameter;
    int x, y;
    Direction direction;
};

#endif // CAR_H
