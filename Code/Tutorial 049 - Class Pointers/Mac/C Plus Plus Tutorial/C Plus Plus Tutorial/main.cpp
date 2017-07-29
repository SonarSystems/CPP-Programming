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
    Vehicle(int speedTemp, float ageTemp);
    
    int speed;
    float age;
    
};

Vehicle::Vehicle()
{
    speed = 60;
    age = 1;
}

Vehicle::Vehicle(int speedTemp, float ageTemp)
{
    speed = speedTemp;
    age = ageTemp;
}

int main(int argc, const char * argv[])
{
    Vehicle bmw(500, 783);
    Vehicle *bmw2 = &bmw;
    
    std::cout << bmw.speed << std::endl;
    
    bmw2->speed = 467;
    
    std::cout << bmw.speed << std::endl;
    
    return 0;
}
