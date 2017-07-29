//
//  main.cpp
//  JJJ
//
//  Created by Sonar Systems on 03/07/2014.
//  Copyright (c) 2014 Sonar Systems. All rights reserved.
//

#include <iostream>

enum Type { hello1 = 90, hello2 = 456, hello3 };

int main(int argc, const char * argv[])
{
    std::cout << Type::hello3 << std::endl;
        
    return 0;
}
