//
// Created by Jack on 23/07/2019.
//

#include "TxtFileLogger.h"
#include <iostream>

void TxtFileLogger::log(std::string msg)
{
    std::cout << "Writing " << msg << " to a text file\n\n";
}