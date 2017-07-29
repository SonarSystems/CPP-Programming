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
    int age;
    
    void PrintFunction();
    
};

class ExtraParts
{
public:
    bool hasExhaust;
    bool hasDoors;
    
};

class Car : public Vehicle, public ExtraParts
{
public:
    bool isBroken;
    
};

void Vehicle::PrintFunction()
{
    std::cout << "Heeeee" << std::endl;
}

int main(int argc, const char * argv[])
{
    Car bmw;
    
    bmw.speed = 200;
    bmw.isBroken = true;
    
    bmw.hasDoors = false;
    bmw.hasExhaust = true;
    
    std::cout << bmw.speed << std::endl;
    
    bmw.PrintFunction();
    
    return 0;
}
