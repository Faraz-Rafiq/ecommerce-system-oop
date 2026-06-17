#ifndef AUTHSYSTEM_H
#define AUTHSYSTEM_H

#include <string>
using namespace std;

class FileManager;

class AuthSystem {
    FileManager *fm;
public:
    AuthSystem(FileManager *f);
    bool checkUsername(const string username);
    bool checkPassword(const string password);
    bool checkProductID(const string id);
    bool checkProductName(const string name);

    ~AuthSystem() {};
};

#endif

