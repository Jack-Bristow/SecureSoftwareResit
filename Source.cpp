//
// Created by Jack on 23/07/2019.
//

#include <iostream>
#include <string>
#include "User.h"
#include "TxtFileLogger.h"
#include "ConsoleLogger.h"
#include "BinFileLogger.h"
#include "LoggerDecorator.h"
#include "Authenticator.h"
#include "Resource.h"
#include "ResourceFactory.h"
#include "Permission.h"
#include "ProofOfID.h"
#include "Subject.h"

User userObject;

void startup()
{
    std::cout << "STARTING SYSTEM...\n";
    std::cout << "Initialising users...\n";
    userObject.initialise();
}

const uint16_t MENUQUIT = 9;

uint16_t mainMenu()
{
    uint16_t ui16_input;
    std::cout << "Welcome to the Weather Station\n";
    std::cout << "Select from the following options\n";
    std::cout << "---------------------------------\n";
    std::cout << "1: Information about program\n";
    std::cout << "2: Log in\n";
    std::cout << "3: Logger testing\n";
    std::cout << "9: Quit\n\n";
    std::cout << "Your choice:";
    //std::cin >> ui16_input;
    if (!(std::cin >> ui16_input))
    {
        std::cin.clear();
        std::cin.ignore(UINT16_MAX, '\n');
        return 0;
    }
    else if (ui16_input > MENUQUIT || ui16_input < 1)
    {
        return 0;
    }
    else
    {
        return ui16_input;
    }
}

void programInfo()
{
    std::cout << "This program is a weather station yada yada\n\n";
}

void logIn()
{
    Subject s;
    Authenticator a;
    ProofOfID *proofofID = a.authenticateUser(s);
    if (proofofID != nullptr)
    {
        std::cout << "Subject proof of ID: " << s.getproofofID() << std::endl;
        std::cout << "System proof of ID: " << proofofID->getproofID() << std::endl;
        std::cout << std::endl;
    }
}

//void checkPerm()
//{
//	uint16_t ui16_subjectID = 1;
//	uint16_t ui16_resourceID = 3;
//	unsigned accessType = W;
//	Subject *s = new Subject(ui16_subjectID);
//	Resource *r = s->getResource(ui16_resourceID, W);
//	r = Resource::newResource(ui16_resourceID, ui16_subjectID);
//	if (r != nullptr)
//	{
//		std::cout << "secret = " << r->getSecret() << std::endl;
//	}
//	std::cout << std::endl;
//}

void LoggerFunc()
{
    uint16_t ui16_loggerType, ui16_formatType;       // variable to store the input
    bool log;

    std::cout << "SELECT LOGGER [1: TXT FILE, 2: CONSOLE, 3: BIN FILE] : ";
    std::cin >> ui16_loggerType;
    std::cout << "\nSELECT FORMAT [1: NO FORMAT, 2: HTML, 3: ENCRYPT] : ";
    std::cin >> ui16_formatType;
    std::cout << "\nLogger: ";

    Logger *logger = nullptr;

    switch (ui16_loggerType)
    {
        case L_TEXT_FILE:
            std::cout << "Text File\n";
            logger = new LoggerDecorator(new TxtFileLogger(), ui16_formatType);
            log = true;
            break;
        case L_CONSOLE:
            std::cout << "Console\n";
            logger = new LoggerDecorator(new ConsoleLogger(), ui16_formatType);
            log = true;
            break;
        case L_BINARY_FILE:
            std::cout << "BIN File\n";
            logger = new LoggerDecorator(new BinFileLogger(), ui16_formatType);
            log = true;
            break;
        default:
            std::cout << "NO LOGGER\n\n";
            log = false;
            break;
    } //switch
    if (log)
    {
        std::string msg = "A message to log";
        logger->log(msg);
    }
}

int main()
{
    startup();
    uint16_t ui16_userChoice = 0;
    while (ui16_userChoice != MENUQUIT)
    {
        ui16_userChoice = mainMenu();
        std::cout << std::endl;
        switch (ui16_userChoice) //does not need case for exit as if 9 is entered will never reach this point
        {
            case 0:
                std::cout << "ERROR\n";
                std::cout << "Choice must be a number between 1-9\n\n";
                break;
            case 1:
                programInfo();
                break;
            case 2:
                logIn();
                break;
            case 3:
                LoggerFunc();
                break;
            case 4:
                //checkPerm();
                break;
        }
    }
    system("pause");
}