#include "gtest/gtest.h"
#include "Car.h"

TEST(CarLibraryTests, TestWheelsNumber)
{
    Car awesome_car("garbage");
    auto result_wheels = awesome_car.getWheels();
    
    EXPECT_EQ(4, result_wheels);
}

TEST(CarLibraryTests, TestDescription)
{
    std::string car_description = "Awesome Car!!";
    Car awesome_car(car_description);
    std::string result_description = awesome_car.getDescription();
    
    EXPECT_EQ(car_description, result_description);
}