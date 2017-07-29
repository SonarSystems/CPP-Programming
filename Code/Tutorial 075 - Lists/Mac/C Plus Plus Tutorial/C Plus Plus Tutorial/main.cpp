//
//  main.cpp
//  JJJ
//
//  Created by Sonar Systems on 03/07/2014.
//  Copyright (c) 2014 Sonar Systems. All rights reserved.
//

#include <iostream>
#include <List>

int main(int argc, const char * argv[])
{
    std::list<int> myList(5, 200);
    
    myList.push_front(47);
    
    myList.pop_back();
    
    for ( std::list<int>::iterator it = myList.begin(); it != myList.end(); it++ )
    {
        std::cout << *it << std::endl;
    }
    
    return 0;
}
