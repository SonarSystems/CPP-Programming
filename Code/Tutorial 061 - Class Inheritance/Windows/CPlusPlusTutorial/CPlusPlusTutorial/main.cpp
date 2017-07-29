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
    
protected:
    int i;
    
};

class Car : public Vehicle
{
public:
    Car();
    
    bool isBroken;
    
};

class Truck : public Vehicle
{
public:
    char truckChar;
    
};

Car::Car()
{
    i = 9;
}

int main(int argc, const char * argv[])
{
    Car bmw;
    Truck bigTruck;
    
    bmw.speed = 200;
    bmw.isBroken = true;
    
    bigTruck.truckChar = '4';
    bigTruck.age = 55;
    
    std::cout << bigTruck.age << std::endl;
    
    return 0;
}
