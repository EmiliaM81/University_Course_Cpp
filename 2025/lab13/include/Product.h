#ifndef _PRODUCT_H_
#define _PRODUCT_H_

#include <iostream>

class Product
{
    friend std::ostream &operator<<(std::ostream &os, const Product& prod);
    friend Product operator*(int val, Product const &prod);
private:
    int _type;
    int _count;
public:
    Product(int type, int count);
    Product();
    Product operator+(int val);
    Product operator-(int val);
    Product operator*(int val);




};

std::ostream &operator<<(std::ostream &os, const Product& prod);
Product operator*(int val, Product const &prod);



#endif
