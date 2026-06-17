#include "filemanager.h"
#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;

bool FileManager::uniqueUsername(const string username) {
    ifstream file("user.txt");
    string line;

    while (getline(file, line)) {
        istringstream iss(line);
        string user;
        iss >> user;
        if (user == username) {
            return false;
        }
    }
    return true;
}

bool FileManager::uniquePassword(const string password) {
    ifstream file("user.txt");
    string line;

    while (getline(file, line)) {
        istringstream iss(line);
        string user, pass;
        iss >> user >> pass;
        if (pass == password) {
            return false;
        }
    }
    return true;
}

bool FileManager::uniqueID(const string id) {
    ifstream file("product.txt");
    string line;

    while (getline(file, line)) {
        istringstream iss(line);
        string existingID;
        iss >> existingID;
        if (existingID == id) {
            return false; 
        }
    }
    return true; 
}

bool FileManager::uniqueName(const string name) {
    ifstream file("product.txt");
    string line;

    while (getline(file, line)) {
        istringstream iss(line);
        string id, existingName;
        iss >> id >> existingName;
        if (existingName == name) {
            return false; 
        }
    }
    return true; 
}



void FileManager::saveUser(const string username, const string password, const string role) {
    ofstream file("user.txt", ios::app);
    if (file.is_open()) {
        file << endl << username << " " << password << " " << role;
    }
    else {
        cout << "Unable to open file for writing." << endl;
    }
    file.close();
    FileManager::~FileManager();
}

void FileManager::saveProduct(const string id, const string name, const int price, const string category) {
    ofstream file("product.txt", ios::app);
    if (file.is_open()) {
        file << endl << id << " " << name << " " << price <<" " <<category;
    }
    else {
        cout << "Unable to open file for writing." << endl;
    }
    file.close();
    FileManager::~FileManager();
}

