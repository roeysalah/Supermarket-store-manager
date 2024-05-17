//
// Created by Roey on 09/12/2023.
//

#include "Milk.h"

Milk::Milk(int product_id,int quantity,int type,string name,int type_of_milk,double percent_fat)
: Product(product_id,quantity,type),name(name),type_of_milk(type_of_milk),percent_fat(percent_fat){
}
Milk:: ~Milk(){

}
double Milk::get_price()const{
    return this->type_of_milk * (this->percent_fat + Product::get_price());
}
void Milk::print()const{
    Product::print();
    cout<<this->name<<"("<<this->type_of_milk<<","<<this->percent_fat<<")"<<endl;
}
string Milk::get_name()const{
    return this->name;
}
int Milk::get_type_of_milk()const{
    return this->type_of_milk;
}
double Milk::get_percent_fat(){
    return this->percent_fat;
}