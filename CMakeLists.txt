cmake_minimum_required(VERSION 3.14)
project(SecureSoftwareResit)

set(CMAKE_CXX_STANDARD 17)

add_library(SecureSoftwareResit Source.cpp AuthenticationInfo.cpp AuthenticationInfo.h Authenticator.cpp Authenticator.h BinFileLogger.cpp BinFileLogger.h ConsoleLogger.cpp ConsoleLogger.h Logger.cpp Logger.h LoggerDecorator.cpp LoggerDecorator.h Permission.cpp Permission.h ProofOfID.cpp ProofOfID.h Resource.cpp Resource.h ResourceFactory.cpp ResourceFactory.h Role.cpp Role.h Subject.cpp Subject.h TxtFileLogger.cpp TxtFileLogger.h User.cpp User.h)