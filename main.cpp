#include <iostream>
#include "AuthSystem.h"
#include "FileManager.h"

using namespace std;

int main() {
    FileManager fileManager;
    
    string id, name, category;
    double price;
    int warranty;

    // Get unique product ID
    while (true) {
        cout << "Enter product ID: ";
        cin >> id;
        if (fileManager.uniqueID(id)) {
            break;
        } else {
            cout << "This Product ID already exists. Please enter a new one." << endl;
        }
    }

    // Get unique product name
    while (true) {
        cout << "Enter product name: ";
        cin >> name;
        if (fileManager.uniqueName(name)) {
            break;
        } else {
            cout << "This Product Name already exists. Please enter a new one." << endl;
        }
    }

    cout << "Enter product category: ";
    cin >> category;
    cout << "Enter product price: ";
    cin >> price;
    cout << "Enter warranty (if applicable): ";
    cin >> warranty;

    // Save product to file (you should have a saveProduct method)
    fileManager.saveProduct(id, name, price, category);

    cout << "Product saved successfully!" << endl;

    return 0;
}
