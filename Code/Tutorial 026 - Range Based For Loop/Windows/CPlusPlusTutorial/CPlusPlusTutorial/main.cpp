//
//  main.cpp
//  C Plus Plus Tutorial
//
//  Created by Sonar Systems on 14/06/2014.
//  Copyright (c) 2014 Sonar Systems. All rights reserved.
//

#include <iostream>
#include <string>

int main(int argc, const char * argv[])
{
    std::string str { "Hello World!" };
    
    for (char c:str)
    {
        std::cout << c << std::endl;
    }
    
    return 0;
}

