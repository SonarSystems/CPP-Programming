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
    static int MathFunction( int a, int b );
    
};

int Vehicle::MathFunction( int a, int b )
{
    return a * b;
}

int main(int argc, const char * argv[])
{
    std::cout << Vehicle::MathFunction(6, 7) << std::endl;
    
    return 0;
}
