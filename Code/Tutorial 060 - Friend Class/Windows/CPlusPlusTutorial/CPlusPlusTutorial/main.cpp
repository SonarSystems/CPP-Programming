//
//  main.cpp
//  JJJ
//
//  Created by Sonar Systems on 03/07/2014.
//  Copyright (c) 2014 Sonar Systems. All rights reserved.
//

#include <iostream>

class Class2;

class Class1
{
public:
    void Method(Class2 cl2);
    
    int b;
    
};

class Class2
{
public:
    Class2(int temp);
    friend class Class1;
    void PrintFunction();
    
private:
    int i;
    
};

Class2::Class2(int temp)
{
    i = temp;
}

void Class1::Method(Class2 cl2)
{
    b = cl2.i;
}

void Class2::PrintFunction()
{
    std::cout << i << std::endl;
}

int main(int argc, const char * argv[])
{
    Class1 obj;
    Class2 obj2(3);
    
    obj.Method(obj2);
    obj2.PrintFunction();
    
    return 0;
}
