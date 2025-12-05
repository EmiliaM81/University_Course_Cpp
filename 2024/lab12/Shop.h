#ifndef _SHOP_H_
#define _SHOP_H_

#include "Product.h"
#include <vector>
#include <iostream>

class Shop
{
    friend std::ostream& operator<<(std::ostream &os, const Shop &obj);

private:
    std::vector<Product> vec;

public:


    void Remove();
    void Add(Product prod);
    void Clear();

    Product& operator[](int index);

    Shop operator-(int value);
    
    Shop operator+(int value);

    Shop() = default;
    ~Shop() = default;
};


#endif 