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
    
    int GetSpeed();
    void SetSpeed(int newSpeed);
    
private:
    int speed;
    int age;
    
};

Vehicle::Vehicle()
{
    
}

int Vehicle::GetSpeed()
{
    return speed;
}

void Vehicle::SetSpeed(int newSpeed)
{
    speed = newSpeed;
}

int main(int argc, const char * argv[])
{
    Vehicle bmw;
    
    bmw.SetSpeed(500);
    
    std::cout << bmw.GetSpeed() << std::endl;
    
    return 0;
}
