#include "product.h"
product::product(string id, string n, double p, string c, string s)
    : productID(id), name(n), price(p), category(c), sellerID(s) {
}

product::product() {}

string product::getSellerID() {
    return sellerID;
}

product::~product() {}
ElectronicProduct::ElectronicProduct(string id, string n, double p, string c, string s, int w)
    : product(id, n, p, c, s), warranty(w) {
}

string ElectronicProduct::getcategory() {
    return category;
}

void ElectronicProduct::details() {
    cout << "Product: " << name << " (Electronic) added to cart by Seller: " << sellerID << endl;
}

void ElectronicProduct::applyDiscount(double percentage) {
    price -= price * (percentage / 100.0);
}

ElectronicProduct::~ElectronicProduct() {}
ClothingProduct::ClothingProduct(string id, string n, double p, string c, string s, string f)
    : product(id, n, p, c, s), fabric(f) {
}

string ClothingProduct::getcategory() {
    return category;
}

void ClothingProduct::details() {
    cout << "Product: " << name << " (Clothing) added to cart by Seller: " << sellerID << endl;
}

void ClothingProduct::applyDiscount(double percentage) {
    price -= price * (percentage / 100.0);
}

ClothingProduct::~ClothingProduct() {}

Book::Book(string id, string n, double p, string c, string s, string a)
    : product(id, n, p, c, s), author(a) {
}

string Book::getcategory() {
    return category;
}

void Book::details() {
    cout << "Product: " << name << " (Book) added to cart by Seller: " << sellerID << endl;
}

void Book::applyDiscount(double percentage) {
    price -= price * (percentage / 100.0);
}

Book::~Book() {}
