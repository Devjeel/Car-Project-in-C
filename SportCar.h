#ifndef CS_SPORTCAR_H_
#define CS_SPORTCAR_H_

#include "Car.h"

namespace cs
{
    class SportCar : public Car
    {
        int noOfPassengers_;
    public:
        SportCar();
        SportCar(int max_speed, int noOfPass);
        // implementations of Vehicle's pure virtual methods
        void accelerate();
        void brake();
        std::ostream& display(std::ostream& ostr) const;
    };
}

#endif