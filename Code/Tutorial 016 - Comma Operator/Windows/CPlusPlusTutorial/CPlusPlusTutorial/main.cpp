//
//  main.cpp
//  C Plus Plus Tutorial
//
//  Created by Sonar Systems on 14/06/2014.
//  Copyright (c) 2014 Sonar Systems. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    int a;
    int b = 7;
    
    a = (b = 3, b + 2);
    
    std::cout << a << std::endl;
    
    return 0;
}

