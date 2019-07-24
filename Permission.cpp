//
// Created by Jack on 23/07/2019.
//

#include "Permission.h"
#include "Role.h"
#include <iostream>

Permission::Permission()
{
    roleResourceAccessMap[0] = { FA, FA, FA, FA, FA, FA }; //Jack
    roleResourceAccessMap[1] = { E|W, E|W|R, E|W|R, E, E, E }; //Test 1
    roleResourceAccessMap[2] = { NA, R, R|W, R, NA, R }; //Test 2
}

bool Permission::checkPermission(uint16_t resourceID, unsigned role, unsigned accessType)
{
    if (roleResourceAccessMap[role].at(resourceID) & accessType)
    {
        return true;
    }
    else
    {
        return false;
    }
}