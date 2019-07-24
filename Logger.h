//
// Created by Jack on 23/07/2019.
//

#ifndef LOGGER_H
#define LOGGER_H
#include <string>
#include <iostream>

enum LoggerType { L_TEXT_FILE = 1, L_CONSOLE, L_BINARY_FILE };

//Logger class
class Logger
{
public:
    virtual void log(std::string msg) = 0;
};

#endif //LOGGER_H