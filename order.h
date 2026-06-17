#ifndef ORDER_H
#define ORDER_H

#include <string>
#include "product.h"
using namespace std;

class order {
    string orderid;
    string date;
    int size;
    int tprice;
    string bid;
    string sellingStatus;
    product** pro;

public:
    order(string id, string d, int s, int p, string buyerID, string status);
    ~order();
};

#endif
