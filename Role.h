//
// Created by Jack on 23/07/2019.
//

#ifndef ROLE_H
#define ROLE_H
#include <map>

class Role
{
    unsigned roleName;
    std::map<unsigned, unsigned> userRoleAccessMap;
public:
    Role();
    unsigned getRoleName();
    void setRoleName(unsigned subjectID);
};

#endif //ROLE_H