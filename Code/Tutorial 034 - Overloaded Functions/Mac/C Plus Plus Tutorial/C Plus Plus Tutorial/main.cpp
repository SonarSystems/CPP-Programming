//
//  main.cpp
//  C Plus Plus Tutorial
//
//  Created by Sonar Systems on 14/06/2014.
//  Copyright (c) 2014 Sonar Systems. All rights reserved.
//

#include <iostream>

float Function( float a, float b )
{
    std::cout << "FLOAT FUNCTION" << std::endl;
    
    return a * b;
}

int Function( int a, int b )
{
    std::cout << "INTEGER FUNCTION" << std::endl;
    
    return a * b;
}

int main(int argc, const char * argv[])
{
    std::cout << Function(3.78f, 9.9f) << std::endl;
    
    return 0;
}

