#include "Car.h"
#include <iostream>

Car::Car(std::string description) : Vehicle (4, description) 
{
    std::cout << "Created Car (" << getDescription() << ")" << std::endl;
}