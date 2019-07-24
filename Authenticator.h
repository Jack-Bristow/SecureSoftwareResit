//
// Created by Jack on 23/07/2019.
//

#ifndef AUTHENTICATOR_H
#define AUTHENTICATOR_H
#include "Subject.h"
#include "ProofOfID.h"
#include <string>

class Authenticator
{
public:
    Authenticator();
    ProofOfID * authenticateUser(Subject &s);
private:
    std::string encryptDecrypt(std::string toEncrypt);
};

#endif //AUTHENTICATOR_H