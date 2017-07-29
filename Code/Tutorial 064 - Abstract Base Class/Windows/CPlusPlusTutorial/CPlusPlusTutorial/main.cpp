//
//  main.cpp
//  JJJ
//
//  Created by Sonar Systems on 03/07/2014.
//  Copyright (c) 2014 Sonar Systems. All rights reserved.
//

#include <iostream>

class Shape
{
public:
    virtual void area() = 0;
    int width, height;
    
};

class ShapeDerived : public Shape
{
public:
    void area() { std::cout << width * height << std::endl; }
    
};

int main(int argc, const char * argv[])
{
    ShapeDerived sd;
    
    sd.width = 90;
    sd.height = 8;
    
    sd.area();
    
    return 0;
}
