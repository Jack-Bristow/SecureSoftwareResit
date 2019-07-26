//
// Created by Jack on 23/07/2019.
//

#ifndef CONSOLELOGGER_H
#define CONSOLELOGGER_H
#include "Logger.h"

//ConsoleLogger class
class ConsoleLogger : public Logger
{
public:
    void log(std::string msg) override;
};

#endif //CONSOLELOGGER_H