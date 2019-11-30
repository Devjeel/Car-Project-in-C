#include <iostream>
#include <iomanip>
#include "SportCar.h"

using namespace std;

namespace cs
{
    SportCar::SportCar()
    {
      //Complete Code
      noOfPassengers_ = 1;
    }
    
    SportCar::SportCar(int maxSpeed, int noOfPass) : Car(maxSpeed) //MaxSpeed already passed
    {
      //Complete Code
      //You are already passing the maxSpeed in function inheritation above
      noOfPassengers_ = noOfPass;
    }
    
    void SportCar::accelerate()
    {
       //Complete Code
       int currentSpeed = speed(); //get speed
       currentSpeed += 40; // Add 40
       Car::speed(currentSpeed); //Set the new speed
    }
    
    void SportCar::brake()
    {
      //Complete Code
      int currentSpeed = speed(); //get speed
      currentSpeed -= 10; // subtract 10
      Car::speed(currentSpeed); //Set the new speed
    }
    
    std::ostream& SportCar::display(std::ostream& os) const
    {
        os << "This sport car is carrying " << noOfPassengers_ << " passengers ";
        if(speed() > 0)
        {
            os << "and is traveling at a speed of " << speed() << " km/h.";
        }
        else
        {
            os << "and is parked.";
        }
        return os;
    }
}