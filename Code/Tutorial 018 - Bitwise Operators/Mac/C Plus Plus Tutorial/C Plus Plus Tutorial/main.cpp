//
//  main.cpp
//  C Plus Plus Tutorial
//
//  Created by Sonar Systems on 14/06/2014.
//  Copyright (c) 2014 Sonar Systems. All rights reserved.
//

#include <iostream>

// AND
// ----
// 0101
// 0011
// ----
// 0001

//  OR
// ----
// 0101
// 0011
// ----
// 0111

// XOR
// ----
// 0101
// 0011
// ----
// 0110

// NOT - check out more info on two's complement

// SBTL
// -----
// 00110
// -----
// 01100 - 1st shift
// 11000 - 2nd shift

// SBTR
// -----
// 0110
// -----
// 0011

int main(int argc, const char * argv[])
{
    // AND &
    //std::cout << (5 & 3) << std::endl;
    
    // OR |
    //std::cout << (5 | 3) << std::endl;
    
    // XOR ^
    //std::cout << (5 ^ 3) << std::endl;
    
    // NOT ~
    //std::cout << ~5 << std::endl;
    
    // Shift bits to the left <<
    //std::cout << (6 << 2) << std::endl;
    
    // Shift bits to the right >>
    std::cout << (6 >> 1) << std::endl;
    
    return 0;
}

