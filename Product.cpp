//
// Created by Roey on 09/12/2023.
//

#include "Product.h"


Product::Product(int product_id, int quantity, int type)
:   product_id{product_id},quantity{quantity},type{type}{
}

Product::~Product() {

}

double Product::get_price()const{
    return 1.5 * this->quantity;
}

void Product:: print()const{
    cout << this->product_id<<"("<< this->quantity<<","<<this->type<<")"<<endl;
}