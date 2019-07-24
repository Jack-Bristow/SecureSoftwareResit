//
// Created by Jack on 23/07/2019.
//

#include "AuthenticationInfo.h"
#include <string>

AuthenticationInfo::AuthenticationInfo()
{
    Users.insert(std::pair<std::string, std::string>("Jack", "123"));
}

bool AuthenticationInfo::validateUser(std::string name, std::string pass)
{
    bool validUser = false;
    std::map<std::string, std::string>::iterator it;
    it = Users.find(name);
    if (it != Users.end())
    {
        if (!(it->second.compare(pass)))
        {
            validUser = true;
        }
    }
    return validUser;
}
