//
//  main.cpp
//  JJJ
//
//  Created by Sonar Systems on 03/07/2014.
//  Copyright (c) 2014 Sonar Systems. All rights reserved.
//

#include <iostream>
#include "ExtraClass.h"
#include "ExtraClass.h"

int main(int argc, const char * argv[])
{
    ExtraClass ec;
    
    ec.PrintFunction();
    ec.i = 90;
    
    std::cout << ec.i << std::endl;
    
    return 0;
}
