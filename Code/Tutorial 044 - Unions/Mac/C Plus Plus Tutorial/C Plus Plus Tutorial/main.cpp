//
//  main.cpp
//  JJJ
//
//  Created by Sonar Systems on 03/07/2014.
//  Copyright (c) 2014 Sonar Systems. All rights reserved.
//

#include <iostream>

union Number
{
    int i;
    double d;
    bool hello;
};

int main(int argc, const char * argv[])
{
    Number number;
    
    number.i = 7;
    
    std::cout << number.i << std::endl;
    
    number.d = 6.7;
    
    std::cout << number.d << std::endl;
    
    return 0;
}
