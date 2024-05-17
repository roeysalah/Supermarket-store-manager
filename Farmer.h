//
// Created by Roey on 09/12/2023.
//

#ifndef SUPERMARKET_FARMER_H
#define SUPERMARKET_FARMER_H
#include "Product.h"


class Farmer : public Product{
private:
    string name;
    int type_of_food; // 1 for veg 2 for fruit
public:
    Farmer(int product_id,int quantity,int type,string name, int type_of_food);
    virtual ~Farmer();
    virtual double get_price()const;
    virtual void print()const;
    string get_name()const;
    int get_type_of_food()const;




};


#endif //SUPERMARKET_FARMER_H
