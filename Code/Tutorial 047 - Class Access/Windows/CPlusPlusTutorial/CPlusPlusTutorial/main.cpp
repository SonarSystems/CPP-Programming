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
    int speed;
    float age;
    
    void PrintFunction();
    
private:
    int acceleration;
    
};

void Vehicle::PrintFunction()
{
    acceleration = 9900;
    
    std::cout << acceleration << std::endl;
}

int main(int argc, const char * argv[])
{
    Vehicle bmw, toyota;
    
    bmw.speed = 900;
    toyota.speed = 89;
    
    std::cout << toyota.speed << std::endl;
    
    toyota.PrintFunction();
    
    return 0;
}
