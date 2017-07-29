//
//  main.cpp
//  C Plus Plus Tutorial
//
//  Created by Sonar Systems on 14/06/2014.
//  Copyright (c) 2014 Sonar Systems. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>

int main(int argc, const char * argv[])
{
    std::string str("658");
    
    int i;
    
    std::stringstream(str) >> i;
    
    std::cout << i << std::endl;
    
    return 0;
}

