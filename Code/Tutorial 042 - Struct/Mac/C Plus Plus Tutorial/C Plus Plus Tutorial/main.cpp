//
//  main.cpp
//  JJJ
//
//  Created by Sonar Systems on 03/07/2014.
//  Copyright (c) 2014 Sonar Systems. All rights reserved.
//

#include <iostream>

struct car
{
    int age = 0;
    float speed = 100;
    
    void PrintFunction()
    {
        std::cout << "PRINT" << std::endl;
    }
};

int main(int argc, const char * argv[])
{
    car bmw, toyota;
    
    bmw.speed = 900;
    std::cout << bmw.speed << std::endl;
    bmw.PrintFunction();
    
    return 0;
}
