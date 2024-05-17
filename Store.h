//
// Created by Roey on 09/12/2023.
//

#ifndef SUPERMARKET_STORE_H
#define SUPERMARKET_STORE_H
using namespace std;
#include <iostream>
#include "Farmer.h"
#include "Milk.h"


class Store {
private:
    string store_name;
    int num_of_products;
    Product **arr;
public:
    Store(string name);
    ~Store();
    void addFarmProduct(int product_id,int quantity,int type,string name, int type_of_food);
    void addMilkProduct(int product_id,int quantity,int type,string name,int type_of_milk,double percent_fat);
    double calcTotalPrice()const;
    void printStore() const;
    void checkQuantity(int quantity)const;
    bool findProduct(int id)const;
    void menu();



};


#endif //SUPERMARKET_STORE_H
