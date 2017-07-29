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
    int i = 67;
    
    // if statement
    if ( i == 9 )
    {
        std::cout << "i is 9" << std::endl;
    }
    else if ( i == 8 )
    {
        std::cout << "i is 8" << std::endl;
    }
    else if ( i == 7 )
    {
        std::cout << "i is 7" << std::endl;
    }
    else
    {
        std::cout << "i is not valid" << std::endl;
    }
    
    return 0;
}

