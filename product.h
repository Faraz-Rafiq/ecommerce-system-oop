#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include <string>
using namespace std;

class product {
protected:
    string productID;
    string name;
    double price;
    string category;
    string sellerID;  

public:
    product(string id, string n, double p, string c, string s);
    product();
    virtual string getcategory() = 0;
    virtual void details() = 0;
    virtual void applyDiscount(double percentage) = 0;
    string getSellerID();  
    virtual ~product() = 0;
};

class ElectronicProduct : public product {
    int warranty;

public:
    ElectronicProduct(string id, string n, double p, string c, string s, int w);
    string getcategory() override;
    void details() override;
    void applyDiscount(double percentage) override;
    ~ElectronicProduct();
};

class ClothingProduct : public product {
    string fabric;

public:
    ClothingProduct(string id, string n, double p, string c, string s, string f);
    string getcategory() override;
    void details() override;
    void applyDiscount(double percentage) override;
    ~ClothingProduct();
};

class Book : public product {
    string author;

public:
    Book(string id, string n, double p, string c, string s, string a);
    string getcategory() override;
    void details() override;
    void applyDiscount(double percentage) override;
    ~Book();
};

#endif
