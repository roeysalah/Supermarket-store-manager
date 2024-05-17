//
// Created by Roey on 09/12/2023.
//

#ifndef SUPERMARKET_MILK_H
#define SUPERMARKET_MILK_H
#include "Product.h"

class Milk : public Product {
private:
    int type_of_milk;
    string name;
    double percent_fat;
public:
    Milk(int product_id,int quantity,int type,string name,int type_of_milk,double percent_fat);
    virtual ~Milk();
    virtual double get_price()const;
    virtual void print()const;
    string get_name()const;
    int get_type_of_milk()const;
    double get_percent_fat();


};


#endif //SUPERMARKET_MILK_H
