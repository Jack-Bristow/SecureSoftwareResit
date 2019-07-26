//
// Created by Jack on 23/07/2019.
//

#ifndef USER_H
#define USER_H
#include <map>

class User
{
public:
    void initialise();
    static bool isAdmin();
    static void authenticate();
private:
    uint16_t ui16_permissionLevel;
};

#endif //USER_H