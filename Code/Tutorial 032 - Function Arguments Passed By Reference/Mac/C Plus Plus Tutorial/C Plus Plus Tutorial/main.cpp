//
//  main.cpp
//  C Plus Plus Tutorial
//
//  Created by Sonar Systems on 14/06/2014.
//  Copyright (c) 2014 Sonar Systems. All rights reserved.
//

#include <iostream>

void MathFunction( int &number1, int &number2 )
{
    std::cout << number1 * number2 << std::endl;
    
    number1 = 8;
}

int main(int argc, const char * argv[])
{
    int i = 98;
    int x = 2;
    
    std::cout << i << std::endl;
    
    MathFunction(i, x);
    
    std::cout << i << std::endl;
    
    return 0;
}

