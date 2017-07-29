//
//  main.cpp
//  JJJ
//
//  Created by Sonar Systems on 03/07/2014.
//  Copyright (c) 2014 Sonar Systems. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    int *i = new int();
    int u = 20;
    i = &u;
    
    std::cout << *i << std::endl;
    
    *i = 40;
    
    std::cout << u << std::endl;

    
    return 0;
}
