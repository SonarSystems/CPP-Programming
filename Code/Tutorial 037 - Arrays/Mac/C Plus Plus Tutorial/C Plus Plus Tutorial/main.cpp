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
    int i[5] = {20, 45, 23, 5, 777};
    
    std::cout << i[3] << std::endl;
    
    i[3] = 456;
    
    std::cout << i[3] << std::endl;
    
    return 0;
}

