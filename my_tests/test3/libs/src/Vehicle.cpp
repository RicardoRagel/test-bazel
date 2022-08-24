#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle(int n_wheels, std::string description) : 
    m_wheels (n_wheels),
    m_description (description) 
{
    std::cout << "Created vehicle of " << m_wheels << " wheels" << std::endl;
}

int Vehicle::getWheels()
{
    return m_wheels;
}

std::string Vehicle::getDescription()
{
    return m_description;
}