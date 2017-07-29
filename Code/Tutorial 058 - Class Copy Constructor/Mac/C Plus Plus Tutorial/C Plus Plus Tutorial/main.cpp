//
//  main.cpp
//  JJJ
//
//  Created by Sonar Systems on 03/07/2014.
//  Copyright (c) 2014 Sonar Systems. All rights reserved.
//

#include <iostream>

class CopyCat
{
public:
    int i;
    char c;
    
    CopyCat();
    
    CopyCat(const CopyCat &x):i(x.i * 10), c(x.c){  };
    
};

CopyCat::CopyCat()
{
    
}

int main(int argc, const char * argv[])
{
    CopyCat cc;
    cc.i = 5;
    cc.c = 'T';
    CopyCat ik(cc);
    
    std::cout << ik.i << std::endl;
    
    return 0;
}
