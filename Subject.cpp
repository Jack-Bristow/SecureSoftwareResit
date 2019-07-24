//
// Created by Jack on 23/07/2019.
//

#include "Subject.h"
#include "ResourceFactory.h"
#include <iostream>

Subject::Subject(std::string aID, std::string pass) : id(aID), password(pass)
{
    proofID = "";
}

Subject::Subject(uint16_t a) : id2(a)
{
}

Subject::Subject()
{
    std::cout << "Enter User ID : ";
    std::cin >> id2;
    std::cout << "Enter Password : ";
    std::cin >> password;
    std::cout << std::endl;
    proofID = "";
}

std::string Subject::getId()
{
    return id;
}

uint16_t Subject::getId2()
{
    return id2;
}

std::string Subject::getPassword()
{
    return password;
}

void Subject::setproofofID(std::string proof)
{
    proofID = proof;
}

std::string Subject::getproofofID()
{
    return proofID;
}

Role Subject::getRole()
{
    return role;
}

Resource* Subject::getResource(uint16_t resourceID, unsigned accessType)
{
    resourceFactory *rf = new resourceFactory();
    r = rf->accessResource(resourceID, role, accessType);
    delete rf;
    return r;
}

//Subject::Subject(uint16_t aid) : ui16_id(aid)
//{
//	role.setRoleName(aid);
//	std::cout << "Subject Created!\n";
//}