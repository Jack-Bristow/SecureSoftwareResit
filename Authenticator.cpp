//
// Created by Jack on 23/07/2019.
//

#include "Authenticator.h"
#include "ProofOfID.h"
#include "AuthenticationInfo.h"
#include <string>
#include <iostream>

Authenticator::Authenticator()
= default;

ProofOfID * Authenticator::authenticateUser(Subject &s)
{
    AuthenticationInfo ainfo;
    ProofOfID *proofofID = nullptr;
    std::string Id = s.getId();
    std::string pass = s.getPassword();
    std::string token;
    if (ainfo.validateUser(Id, pass))
    {
        std::cout << "Welcome!\n";
        std::cout << "Authenticated!\n\n";
        token = encryptDecrypt(Id + pass);
        proofofID = new ProofOfID(token);
        s.setproofofID(token);
    }
    else
    {
        std::cout << "Invalid user ID or password. Please try again.\n\n";
    }
    return proofofID;
}

std::string Authenticator::encryptDecrypt(std::string toEncrypt)
{
    uint8_t key = 'X';
    std::string output = toEncrypt;
    for (uint64_t i = 0; i < toEncrypt.size(); i++)
    {
        output[i] = toEncrypt[i] ^ key;
    }
    return output;
}