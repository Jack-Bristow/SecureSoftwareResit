//
// Created by Jack on 23/07/2019.
//

#include "Resource.h"
#include "Permission.h"
#include <string>
#include <iostream>

Resource::Resource(uint16_t a) : ui16_id(a)
{
    secret = "bla bla bla";
}

Resource* Resource::newResource(uint16_t resourceID, uint16_t role, unsigned accessType)
{
    Permission p = Permission();
    if (p.checkPermission(resourceID, role, accessType))
    {
        std::cout << "Access Granted\n";
        return new Resource(resourceID);
    }
    else
    {
        std::cout << "No Access\n";
        return nullptr;
    }
}

uint16_t Resource::getId()
{
    return ui16_id;
}

std::string Resource::getSecret()
{
    return secret;
}