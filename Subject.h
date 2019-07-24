//
// Created by Jack on 23/07/2019.
//

#ifndef SUBJECT_H
#define SUBJECT_H
#include "Resource.h"
#include "Role.h"
#include <string>

class Subject
{
private:
    std::string id;
    uint16_t id2;
    std::string password;
    std::string proofID;
    Resource* r;
    Role role;
public:
    Subject(std::string aID, std::string pass);
    Subject(uint16_t a);
    Subject();
    std::string getId();
    uint16_t getId2();
    std::string getPassword();
    void setproofofID(std::string proof);
    std::string getproofofID();
    Role getRole();
    Resource* getResource(uint16_t resourceID, unsigned accessType);
};

#endif //SUBJECT_H