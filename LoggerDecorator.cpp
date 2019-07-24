//
// Created by Jack on 23/07/2019.
//

#include "LoggerDecorator.h"
#include <iostream>

LoggerDecorator::LoggerDecorator(Logger *acontents, unsigned aformatType) : contents(acontents), formatType(aformatType)
{
}

void LoggerDecorator::log(std::string msg)
{
    msg = formatMessage(msg);
    contents->log(msg);
}

std::string LoggerDecorator::encryptDecrypt(std::string toEncrypt)
{
    char key = 'X';
    std::string output = toEncrypt;
    for (uint16_t i = 0; i < toEncrypt.size(); i++)
    {
        output[i] = toEncrypt[i] ^ key;
    }
    return output;
}

std::string LoggerDecorator::formatMessage(std::string msg)
{
    std::cout << "Formatting: ";
    switch (formatType)
    {
        case NO_FORMAT:
            std::cout << "No format!\n";
            return msg;
            break;
        case HTML_FORMAT:
            std::cout << "HTML\n";
            return "<HTML><BODY> <b>" + msg + "</b> </BODY></HTML>";
            break;
        case ENC_FORMAT:
            std::cout << "ENCRYPT\n";
            return encryptDecrypt(msg);
            break;
        default:
            std::cout << "Unknown format\n";
            return msg;
            break;
    }
}