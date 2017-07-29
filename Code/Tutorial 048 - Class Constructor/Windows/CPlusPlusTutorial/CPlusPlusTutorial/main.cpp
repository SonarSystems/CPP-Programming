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
    Vehicle( int speedTemp, int ageTemp );
    
    int speed;
    float age;
    
};

Vehicle::Vehicle()
{
    speed = 600;
    age = 900;
}

Vehicle::Vehicle( int speedTemp, int ageTemp )
{
    speed = speedTemp;
    age = ageTemp;
}

int main(int argc, const char * argv[])
{
    Vehicle bmw( 67, 89 );
    
    std::cout << bmw.speed << std::endl;
    
    return 0;
}
