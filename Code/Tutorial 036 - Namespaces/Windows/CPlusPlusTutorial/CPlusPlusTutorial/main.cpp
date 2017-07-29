//
//  main.cpp
//  C Plus Plus Tutorial
//
//  Created by Sonar Systems on 14/06/2014.
//  Copyright (c) 2014 Sonar Systems. All rights reserved.
//

#include <iostream>

namespace numbers
{
    int i = 9;
    float f = 8.75;
    
    void Function()
    {
        std::cout << "Namespace 1" << std::endl;
    }
}

namespace numbers2
{
    int i = 10;
    float f = 1.24;
    
    void Function()
    {
        std::cout << "Namespace 2" << std::endl;
    }
}

using namespace numbers;

int main(int argc, const char * argv[])
{
    numbers::i = 3;
    std::cout << numbers2::i << std::endl;
    
    numbers::Function();
    numbers2::Function();
    
    Function();
    
    return 0;
}

