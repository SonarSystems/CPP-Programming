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
    int i = 11;
    
    try
    {
        if (i < 10)
        {
            std::cout << i << std::endl;
        }
        else
        {
            throw 1;
        }
    }
    catch(int error)
    {
        std::cout << error << std::endl;
    }
    
    return 0;
}
