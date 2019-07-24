//
// Created by Jack on 23/07/2019.
//

#ifndef BINFILELOGGER_H
#define BINFILELOGGER_H
#include "Logger.h"

//BinFileLogger class
class BinFileLogger : public Logger
{
public:
    void log(std::string msg);
};

#endif //BINFILELOGGER_H