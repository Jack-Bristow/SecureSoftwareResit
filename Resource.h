//
// Created by Jack on 23/07/2019.
//

#ifndef RESOURCE_H
#define RESOURCE_H
#include <string>

class Resource
{
private:
    uint16_t ui16_id;
    std::string secret;
    Resource(uint16_t a);
public:
    static Resource* newResource(uint16_t resourceID, unsigned role, unsigned accessType);
    uint16_t getId();
    std::string getSecret();
};

#endif //RESOURCE_H