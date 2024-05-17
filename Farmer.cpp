//
// Created by Roey on 09/12/2023.
//

#include "Farmer.h"

Farmer::Farmer(int product_id,int quantity,int type,string name, int type_of_food)
:Product(product_id,quantity,type),name(name),type_of_food(type_of_food){
}
Farmer::~Farmer(){

}
double Farmer::get_price()const{
    return 3 * this->type_of_food;
}

void Farmer::print()const{
    Product::print();
    cout<<this->name<<"("<<this->type_of_food<<","<<this->getType()<<")"<<endl;
}
string Farmer::get_name()const{
    return this->name;
}
int Farmer::get_type_of_food()const{
    return this->type_of_food;
}
