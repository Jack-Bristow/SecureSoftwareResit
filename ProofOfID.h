//
// Created by Jack on 23/07/2019.
//

#ifndef PROOFOFID_H
#define PROOFOFID_H
#include <string>

class ProofOfID
{
private:
    std::string proofID;
public:
    ProofOfID();
    ProofOfID(std::string);
    std::string getproofID();
    void setproofID(std::string);
};

#endif //PROOFOFID_H