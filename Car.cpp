#include "Car.h"

namespace cs
{
    Car::Car(int maxSpeed)
    {
       //Complete Code
       if (maxSpeed == NULL){
           maxSpeed_ = 100;
       }
       maxSpeed_ = maxSpeed;
       speed_ = 0;
    }
    
    int Car::speed() const
    {
        //Complete Code
        return speed_;
    }
    
    void Car::speed(int value)
    {
        //Complete Code
        if (value > maxSpeed_){
            speed_ = maxSpeed_;
        }
        if (value <= 0 ){
            speed_ = 0;
        }
        speed_ = value;
    }
    
    int Car::maxSpeed() const
    {
       //Complete Code
       return maxSpeed_;
    }
    
    std::ostream& operator<<(std::ostream& ostr, const Car& C)
    {
        return C.display(ostr);
    }
}