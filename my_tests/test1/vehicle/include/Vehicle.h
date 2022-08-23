#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle
{
    public:
        Vehicle(int n_wheels, std::string description);
        int getWheels();
        std::string getDescription();
    
    private:
        int m_wheels;
        std::string m_description;
};

#endif