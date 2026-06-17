#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <string>
using namespace std;

class FileManager {
public:
    bool uniqueUsername(const string username);
    bool uniquePassword(const string password);
    void saveUser(const string username, const string password, const string role);
    bool uniqueID(const string ID);
    bool uniqueName(const string name);
    void saveProduct(const string id, const string name, const int price, const string category);
    ~FileManager() {};
};
#endif

