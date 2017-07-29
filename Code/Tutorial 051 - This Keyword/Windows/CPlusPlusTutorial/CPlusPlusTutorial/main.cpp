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
    Vehicle( int speed, int age );
    
    int speed;
    int age;
    
};

Vehicle::Vehicle( int speed, int age )
{
    this->speed = speed;
    this->age = age;
}

int main(int argc, const char * argv[])
{
    Vehicle bmw (500, 789);
    
    std::cout << bmw.speed << std::endl;
    
    return 0;
}
