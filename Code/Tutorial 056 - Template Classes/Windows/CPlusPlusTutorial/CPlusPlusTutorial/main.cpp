//
//  main.cpp
//  JJJ
//
//  Created by Sonar Systems on 03/07/2014.
//  Copyright (c) 2014 Sonar Systems. All rights reserved.
//

#include <iostream>

template <class T>
class TemplateClass
{
public:
    T i, x;
    
    TemplateClass( T first, T second );
    
};

template <class T>
TemplateClass<T>::TemplateClass( T first, T second )
{
    i = first;
    x = second;
}

int main(int argc, const char * argv[])
{
    TemplateClass<int> tt( 4.5f, 4.7f );
    
    std::cout << tt.i << std::endl;
    
    return 0;
}
