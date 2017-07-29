//
//  main.cpp
//  JJJ
//
//  Created by Sonar Systems on 03/07/2014.
//  Copyright (c) 2014 Sonar Systems. All rights reserved.
//

#include <iostream>

class Vehicle
{
public:
    Vehicle();
    Vehicle(int speedTemp, int ageTemp);
    Vehicle operator +(const Vehicle &parameter);
    
    int speed;
    int age;
    
};

Vehicle::Vehicle()
{
    speed = 60;
    age = 1;
}

Vehicle::Vehicle(int speedTemp, int ageTemp)
{
    speed = speedTemp;
    age = ageTemp;
}

Vehicle Vehicle::operator+(const Vehicle &parameter)
{
    Vehicle temp;
    temp.speed = speed + parameter.speed;
    temp.age = age + parameter.age;
    
    return temp;
}

int main(int argc, const char * argv[])
{
    Vehicle bmw(500, 60);
    Vehicle bmw2(4, 10);
    
    Vehicle superBMW = bmw + bmw2;
    
    std::cout << superBMW.speed << std::endl;
    std::cout << superBMW.age << std::endl;
    
    return 0;
}
