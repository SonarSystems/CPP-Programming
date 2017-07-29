//
//  main.cpp
//  C Plus Plus Tutorial
//
//  Created by Sonar Systems on 14/06/2014.
//  Copyright (c) 2014 Sonar Systems. All rights reserved.
//

#include <iostream>

template <class DataType>
DataType Multiplication(DataType a, DataType b)
{
    return a * b;
}

int main(int argc, const char * argv[])
{
    std::cout << Multiplication(5.5f, 6.9f) << std::endl;
    
    return 0;
}

