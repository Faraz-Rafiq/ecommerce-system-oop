#include "authsystem.h"
#include "filemanager.h"

AuthSystem::AuthSystem(FileManager* f) {
    fm = f;
}

bool AuthSystem::checkUsername(const string username) {
    return fm->uniqueUsername(username);
}

bool AuthSystem::checkPassword(const string password) {
    return fm->uniqueUsername(password);
}
bool AuthSystem::checkProductID(const string id) {
    return fm->uniqueID(id);
}

bool AuthSystem::checkProductName(const string name) {
    return fm->uniqueName(name);
}
