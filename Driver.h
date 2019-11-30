#ifndef CS_DRIVER_H_
#define CS_DRIVER_H_

#define MAX_NAME 30

#include "Car.h"

namespace cs
{
    class Driver
    {
        char name_[MAX_NAME + 1];
        Car& car_;
    public:
        Driver(const char* name, Car& cRef);
        void drive();
        void stop();
        void showStatus();
    };
}

#endif