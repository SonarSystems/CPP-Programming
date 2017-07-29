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
    int *p = new int();
    
    *p = 7;
    
    std::cout << *p << std::endl;
    
    delete p;
    p = NULL;
    
    //std::cout << *p << std::endl;
    
    return 0;
}
