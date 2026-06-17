#include "order.h"
#include <iostream>
using namespace std;

order::order(string id, string d, int s, int p, string buyerID, string status)
    : orderid(id), date(d), size(s), tprice(p), bid(buyerID), sellingStatus(status)
{
    pro = new product * [size];
    for (int i = 0; i < size; i++) {
        pro[i] = nullptr;
    }
}

order::~order() {
    for (int i = 0; i < size; i++) {
        delete pro[i];
    }
    delete[] pro;
}
