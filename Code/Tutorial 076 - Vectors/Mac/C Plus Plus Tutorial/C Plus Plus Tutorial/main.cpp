//
//  main.cpp
//  JJJ
//
//  Created by Sonar Systems on 03/07/2014.
//  Copyright (c) 2014 Sonar Systems. All rights reserved.
//

#include <iostream>

#include <Vector>

int main(int argc, const char * argv[])
{
    std::vector<int> myVector;
    
    myVector.push_back(45);
    myVector.push_back(23);
    myVector.push_back(1);
    myVector.push_back(989);
    
    std::cout << myVector[3] << std::endl;
    
    return 0;
}
