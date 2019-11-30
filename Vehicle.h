#ifndef CS_VEHICLE_
#define CS_VEHICLE_

#include <iostream>

namespace cs
{
    class Vehicle
    {
    public:
        virtual void accelerate() = 0;
        virtual void brake() = 0;
        virtual std::ostream& display(std::ostream& ostr) const = 0;
    };
}

#endif