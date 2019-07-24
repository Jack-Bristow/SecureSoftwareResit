//
// Created by Jack on 23/07/2019.
//

#ifndef LOGGERDECORATOR_H
#define LOGGERDECORATOR_H
#include "Logger.h"

enum FormatType { NO_FORMAT = 1, HTML_FORMAT, ENC_FORMAT };

class LoggerDecorator : public Logger
{
    unsigned formatType;
    Logger *contents;
    void log(std::string msg);
    std::string encryptDecrypt(std::string toEncrypt);
public:
    LoggerDecorator(Logger *contents, unsigned formatType);
    virtual std::string formatMessage(std::string msg);
};

#endif //LOGGERDECORATOR_H