//
//  main.cpp
//  JJJ
//
//  Created by Sonar Systems on 03/07/2014.
//  Copyright (c) 2014 Sonar Systems. All rights reserved.
//

#include <iostream>
#include <fstream>

int main(int argc, const char * argv[])
{
    std::ofstream file ("textfile.txt");
    
    if ( file.is_open() )
    {
        file << "We have added a file\n";
        file.close();
    }
    else
    {
        std::cout << "Unable to open file" << std::endl;
    }
    
    return 0;
}
