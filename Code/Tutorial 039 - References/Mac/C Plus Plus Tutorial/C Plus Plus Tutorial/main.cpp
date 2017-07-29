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
    int i = 20;
    int &p = i;
    
    p = 9;
    
    std::cout << i << std::endl;
    
    return 0;
}
