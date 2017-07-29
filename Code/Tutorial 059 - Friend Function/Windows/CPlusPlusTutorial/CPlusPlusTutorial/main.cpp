//
//  main.cpp
//  JJJ
//
//  Created by Sonar Systems on 03/07/2014.
//  Copyright (c) 2014 Sonar Systems. All rights reserved.
//

#include <iostream>

class FriendFunction
{
public:
    FriendFunction(int temp);
    friend void PrintNumber(FriendFunction friendFunc);
    
private:
    int i;
    void PrivateMethod();
    
};

FriendFunction::FriendFunction(int temp)
{
    i = temp;
}

void PrintNumber(FriendFunction friendFunc)
{
    std::cout << friendFunc.i << std::endl;
    
    friendFunc.PrivateMethod();
}

void FriendFunction::PrivateMethod()
{
    std::cout << "PRIVATE" << std::endl;
}

int main(int argc, const char * argv[])
{
    FriendFunction func(4);
    
    PrintNumber(func);
    
    return 0;
}
