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
    virtual void PrintFunction();
    
};

void Vehicle::PrintFunction()
{
    std::cout << "PRINT BASe" << std::endl;
}

class BMW : public Vehicle
{
public:
    void PrintFunction();
    
};

void BMW::PrintFunction()
{
    std::cout << "PRINT BMW" << std::endl;
}

int main(int argc, const char * argv[])
{
    Vehicle v1;
    
    v1.PrintFunction();
    
    BMW b1;
    b1.PrintFunction();
    
    return 0;
}
