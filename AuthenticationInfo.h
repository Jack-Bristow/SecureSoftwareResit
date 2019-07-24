//
// Created by Jack on 23/07/2019.
//

#ifndef AUTHENTICATIONINFO_H
#define AUTHENTICATIONINFO_H
#include <map>
#include <string>

class AuthenticationInfo
{
private:
    std::map<std::string, std::string> Users;
public:
    AuthenticationInfo();
    bool validateUser(std::string name, std::string password);
};

#endif //AUTHENTICATIONINFO_H
