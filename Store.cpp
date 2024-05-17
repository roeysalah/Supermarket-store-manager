//
// Created by Roey on 09/12/2023.
//

#include "Store.h"
#include<cstdlib>

Store::Store(string name)
: store_name(name),num_of_products(0),arr(nullptr){

}

bool Store::findProduct(int id)const{
    for (int i = 0; i < num_of_products; ++i) {
        if(this->arr[i]->getId() == id)
            return true;
    }
    return false;
}


void Store::addFarmProduct(int product_id,int quantity,int type,string name, int type_of_food){
    if(findProduct(product_id)){
        throw string("id already exist");
    }
    // make a new arr with space for another product
    Product **temp = new Product * [num_of_products + 1];
    for (int i = 0; i < num_of_products; ++i) {
        //copy the old array to the new one.
        temp[i] = arr[i];
        delete arr[i];
    }
    delete [] arr;
    temp[num_of_products] = new Farmer(product_id,quantity,type,name,type_of_food);
    num_of_products++;
    this->arr = temp;

}

void Store::addMilkProduct(int product_id, int quantity, int type,string name, int type_of_milk,double percent_fat)
{
    if(findProduct(product_id)){
        throw string("id already exist");
    }
    // make a new arr with space for another product
    Product **temp = new Product * [num_of_products + 1];
    for (int i = 0; i < num_of_products; ++i) {
        //copy the old array to the new one.
        temp[i] = arr[i];
        delete arr[i];
    }
    delete [] arr;
    temp[num_of_products] = new Milk(product_id,quantity,type,name,type_of_milk,percent_fat);
    num_of_products++;
    this->arr = temp;
}

double Store:: calcTotalPrice()const {
    double sum{0};
    for (int i = 0; i < num_of_products; ++i) {
        sum+=this->arr[i]->get_price();
    }
    return sum;
}


void Store::printStore() const{
    cout << "the name of the store is:" << store_name <<
         "the num of the products in the store is:" <<
         num_of_products << endl;
    for (int i = 0; i < num_of_products; i++) {
        this->arr[i]->print();
    }
}



void Store::checkQuantity(int quantity)const{
    if (quantity < 0)
        throw string("impossible quantity");
    return;
}



void Store::menu(){
    int choice;
    int type,type_of_food,type_of_milk;
    double quantity,fat;
    string name;
    while (true)
    {
        cout << "MAIN MENU" << endl;
        cout << "*********" << endl;
        cout << "1) Insert a new product" << endl;
        cout << "2) print sum of the prices" << endl;
        cout << "3) print all" << endl;
        cout << "4) EXIT" << endl;
        cout << "Your choice : ";
        cin >> choise;
        switch (choice)
        {
            case 1 :
        }

    }

}















Store::~Store(){
    for (int i = 0; i < num_of_products; ++i) {
        delete arr[i];
    }
    delete [] arr;
}

