//
//  main.cpp
//  JJJ
//
//  Created by Sonar Systems on 03/07/2014.
//  Copyright (c) 2014 Sonar Systems. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <String>

int main(int argc, const char * argv[])
{
    std::ifstream file;
    file.open("world.txt");
    
    std::string fileOutput;
    
    if ( file.is_open() )
    {
        while( !file.eof() )
        {
            file >> fileOutput;
            std::cout << fileOutput << std::endl;
        }
    }
    else
    {
        std::cout << "File failed to open" << std::endl;
    }
    
    file.close();
    
    return 0;
}
