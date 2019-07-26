//
// Created by Jack on 23/07/2019.
//

#include "ResourceFactory.h"

Resource* resourceFactory::accessResource(uint16_t resourceID, uint16_t role, unsigned accessType)
{
    return Resource::newResource(resourceID, role, accessType);
}