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
    // ! NOT operator
    //std::cout << !true << std::endl;
    
    // && AND operator
    //std::cout << ((5 == 5) && (5 > 4)) << std::endl;
    
    // || OR operator
    //std::cout << ((5 > 6) || (5 < 8)) << std::endl;
    
    // combining the && and ||
    std::cout << ((5 == 5 && 7 == 8) || (5 > 6 || 6 < 9)) << std::endl;
    
    return 0;
}

