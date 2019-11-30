#ifndef CS_CAR_H_
#define CS_CAR_H_

#include <iostream>
#include "Vehicle.h"

namespace cs
{
    class Car : public Vehicle
    {
        int speed_;
        int maxSpeed_;
    protected:
        void speed(int value);
        int maxSpeed() const;
    public:
        Car(int maxSpeed = 100);
        int speed() const;
    };
    std::ostream& operator<<(std::ostream& ostr, const Car& C);
}

#endif