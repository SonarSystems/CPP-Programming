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
    int i = 10;
    
huluNetflixStatement:
    
    std::cout << i << ", ";
    
    i--;
    
    if ( i > 0 )
    {
        goto huluNetflixStatement;
    }
    
    std::cout << "\nFINISHED" << std::endl;
    
    return 0;
}

