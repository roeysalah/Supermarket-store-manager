//
// Created by Roey on 09/12/2023.
//

#ifndef SUPERMARKET_PRODUCT_H
#define SUPERMARKET_PRODUCT_H

#include <iostream>
using namespace std;

class Product {
private:
    int product_id;
    int quantity;
    int type;


public:
    Product(int product_id,int quantity,int type);
    virtual ~Product();

    virtual double get_price()const;
    virtual void print()const;

    int getId() const { return product_id; }
    double getQuantity() const { return quantity; }
    int getType() const { return type; }

};


#endif //SUPERMARKET_PRODUCT_H
