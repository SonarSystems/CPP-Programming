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
    static int i;
    
};

int Vehicle::i = 89;

int main(int argc, const char * argv[])
{
    Vehicle bmw1, bmw2;
    
    bmw2.i = 900;
    
    std::cout << bmw1.i << std::endl;
    
    return 0;
}
