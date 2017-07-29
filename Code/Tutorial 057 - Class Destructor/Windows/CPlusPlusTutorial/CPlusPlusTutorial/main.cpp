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
    ~Vehicle();
    
    int *pointer;
    
};

Vehicle::Vehicle()
{
    pointer = new int();
}

Vehicle::~Vehicle()
{
    pointer = NULL;
    delete pointer;
}

int main(int argc, const char * argv[])
{
    Vehicle bmw;
    *bmw.pointer = 56;
    
    std::cout << *bmw.pointer << std::endl;
    
    bmw.~Vehicle();
    
    std::cout << *bmw.pointer << std::endl;
    
    return 0;
}
