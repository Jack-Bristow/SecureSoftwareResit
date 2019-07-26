//
// Created by Jack on 23/07/2019.
//

#include "ProofOfID.h"
#include <string>

ProofOfID::ProofOfID()
= default;

ProofOfID::ProofOfID(std::string aproofID) : proofID(std::move(aproofID))
{
}

std::string ProofOfID::getproofID()
{
    return proofID;
}

void ProofOfID::setproofID(std::string aproofID)
{
    proofID = std::move(aproofID);
}