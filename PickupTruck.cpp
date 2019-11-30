#include <string.h>
#include <cstring>
#include "PickupTruck.h"

using namespace std;

namespace cs
{
    PickupTruck::PickupTruck()
    {
       //Complete Code
       loadAmount_ = 0;
       char emptyStr[]{""}; // an empty C-style string
       strcpy_s(loadedMaterial_, emptyStr); //set the load to empty C-style string
    }
    
    bool PickupTruck::isEmpty() const
    {
       //Complete Code
       if (loadAmount_ == 0){
           return true;
       }
	   return false;
    }
    
    void PickupTruck::load(const char* loadedMaterial, int loadAmount)
    {
        //Complete Code
        loadAmount_ = loadAmount;
        strcpy_s(loadedMaterial_, loadedMaterial); //set to load_
    }
    
    void PickupTruck::accelerate()
    {
       //Complete Code
       int currentSpeed = speed(); //get speed
       currentSpeed += 20; // Add 20
       Car::speed(currentSpeed); //Set the new speed
    }
    
    void PickupTruck::brake()
    {
        //Complete Code
        int currentSpeed = speed(); //get speed
        currentSpeed -= 5; // Subtract 5
        Car::speed(currentSpeed); //Set the new speed
    }
    
    void PickupTruck::unload()
    {
        //Complete Code
        loadAmount_ = 0;
    }
    
    std::ostream& PickupTruck::display(std::ostream& os) const
    {
        //Complete Code
        if(isEmpty())
        {
            os << "This pickup truck is not carrying any load";
        }
        else
        {
            os << "This pickup truck is carrying " << loadAmount_ << " kgs of " << loadedMaterial_;
        }

        if(speed() > 0)
        {
            os << ", and is traveling at the speed of " << speed() << " km/h.";
        }
        else
        {
            os << "and is parked.";
        }
        return os;
    }
}