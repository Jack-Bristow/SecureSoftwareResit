//
// Created by Jack on 23/07/2019.
//

#include "User.h"
#include <string>
#include <iostream>

void User::initialise()
{
    std::cout << "Initialising user...\n";
    ui16_permissionLevel = 0;
    //initialise user, load preferences from file
}

bool User::isAdmin()
{
    return false;
}

void User::authenticate()
{
    std::string username, password;
    std::cout << "Please enter a username: ";
    std::cin >> username;
    std::cout << "Please enter a password: ";
    std::cin >> password;
}