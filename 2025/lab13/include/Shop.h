#ifndef _SHOP_H_
#define _SHOP_H_

#include "Product.h"

class Shop
{
    friend std::ostream &operator<<(std::ostream &os, const Shop &shop);
    friend Shop operator+(const Shop& shop1, const Shop& shop2);
    
private:
    Product* _tab;
    int _size;
    int _tabSize;
public:
    Shop();
    Shop(const Shop& shop);
    ~Shop();

    void Remove();
    void Clear();
    void Add(Product prod);
    Product &operator[](int val);
    Shop operator-(int val);
    Shop operator+(int val);
    Shop operator*(int val);
    Shop &operator=(const Shop& shop);


};

std::ostream &operator<<(std::ostream &os, const Shop& shop);Shop operator+(const Shop& shop1, const Shop& shop2);
Shop operator+(const Shop& shop1, const Shop& shop2);
    

#endif