//
// Created by Jack on 23/07/2019.
//

#ifndef TXTFILELOGGER_H
#define TXTFILELOGGER_H
#include "Logger.h"

//FileLogger class
class TxtFileLogger : public Logger
{
public:
    void log(std::string msg);
};

#endif // TXTFILELOGGER_H