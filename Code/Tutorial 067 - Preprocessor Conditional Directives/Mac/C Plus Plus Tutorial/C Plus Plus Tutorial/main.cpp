//
//  main.cpp
//  JJJ
//
//  Created by Sonar Systems on 03/07/2014.
//  Copyright (c) 2014 Sonar Systems. All rights reserved.
//

#include <iostream>

#define YES

int main(int argc, const char * argv[])
{
#ifdef YES
    int i;
#else
    int x;
#endif
    
    //i = 0;
    //x = 0;
    
#ifndef YES
#define HELLO
#endif
    
#ifdef HELLO
    std::cout << "HELLO" << std::endl;
#endif
    
    
    return 0;
}
