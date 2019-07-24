//
// Created by Jack on 23/07/2019.
//

#include "Role.h"

Role::Role()
{
    roleName = 0;
    userRoleAccessMap[0] = 1;
    userRoleAccessMap[1] = 2;
    userRoleAccessMap[2] = 3;
}

unsigned Role::getRoleName()
{
    return roleName;
}

void Role::setRoleName(unsigned subjectID)
{
    roleName = userRoleAccessMap[subjectID];
}