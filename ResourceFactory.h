//
// Created by Jack on 23/07/2019.
//

#ifndef RESOURCEFACTORY_H
#define RESOURCEFACTORY_H
#include "Resource.h"
#include "Role.h"

class resourceFactory
{
public:
    Resource* accessResource(uint16_t resourceID, Role role, unsigned accessType);
};

#endif //RESOURCEFACTORY_H