//
// Created by Jack on 23/07/2019.
//

#ifndef PERMISSION_H
#define PERMISSION_H
#include "Resource.h"
#include <map>
#include <vector>

class Permission
{
private:
    /*std::map<uint16_t, uint16_t> userAccessType;
    std::map<uint16_t, uint16_t> resourceAccessType;
    Resource *pResource;
    AuthSubject *pSubject;*/
    enum AccessType
    {
        NA = 0x00,
        CO = 0x01,
        E = 0x02,
        W = 0x04,
        R = 0x08,
        FA = 0x10
    };
    typedef std::vector<unsigned> resources;
    std::map<uint16_t, resources> roleResourceAccessMap;
public:
    Permission();
    bool checkPermission(uint16_t resourceID, unsigned role, unsigned accessType);
};

#endif //PERMISSION_H