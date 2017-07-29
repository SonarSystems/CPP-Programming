//
//  main.cpp
//  C Plus Plus Tutorial
//
//  Created by Sonar Systems on 14/06/2014.
//  Copyright (c) 2014 Sonar Systems. All rights reserved.
//

#include <iostream>

void PrintFunction( int a, int b = 5 )
{
    std::cout << a << " : " << b << std::endl;
}

int main(int argc, const char * argv[])
{
    PrintFunction(3);
    PrintFunction(1, 9);
    
    return 0;
}

