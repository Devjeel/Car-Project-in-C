#ifndef CS_TRUCK_H_
#define CS_TRUCK_H_

#define MAX_MATERIAL 30

#include <iostream>
#include "Car.h"

namespace cs
{
    class PickupTruck : public Car
    {
        int loadAmount_;
        char loadedMaterial_[MAX_MATERIAL + 1];
    public:
        PickupTruck();
        void load(const char* loadedMaterial, int loadAmount);
        void unload();
        void accelerate();
        void brake();
        bool isEmpty() const;
        std::ostream& display(std::ostream& ostr) const;
    };
}

#endif