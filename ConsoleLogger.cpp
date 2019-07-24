//
// Created by Jack on 23/07/2019.
//

#include "ConsoleLogger.h"
#include <iostream>

void ConsoleLogger::log(std::string msg)
{
    std::cout << "Writing " << msg << " to the console\n\n";
}