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
    int superhero = 2;
    
    switch (superhero)
    {
        case 0:
            std::cout << "Batman" << std::endl;
            
            break;
            
        case 1:
            std::cout << "Yoda" << std::endl;
            
            break;
            
        case 2:
        case 3:
        case 4:
        case 5:
            std::cout << "multi case" << std::endl;
            
            break;
            
        default:
            std::cout << "Not a valid superhero" << std::endl;
            
            break;
    }
    
    return 0;
}

