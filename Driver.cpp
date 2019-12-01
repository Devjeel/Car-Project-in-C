#include <iostream>
#include <cstring>
#include "Driver.h"

using namespace std;

namespace cs
{
    Driver::Driver(const char* name, Car& C):car_(C)
    {
       //Complete Code
       strcpy_s(name_, name);
       car_ = cref(C);
    }
    
    void Driver::drive()
    {
        //Complete Code
        car_.accelerate(); //Accelarte and brake though car refence obj.
        car_.brake();
        showStatus();
    }
    
    void Driver::stop()
    {
        //Complete Code
        //Keep Breaking until 0 speed
        while (car_.speed()){
            car_.brake();
        }
        //print status 
        showStatus();
    }
    
    void Driver::showStatus()
    {
        //Complete Code
        cout << name_ << " is driving this car." <<endl;
        cout << car_ <<endl;
    }
}