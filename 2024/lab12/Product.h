#ifndef _PRODUCT_H_
#define _PRODUCT_H_

#include <iostream>

class Product
{
    friend class Shop;
    friend std::ostream &operator<<(std::ostream &os, const Product &obj);
    

private:
    int _typ;
    int _ileSztuk;
public:

    /** @brief konstruktor dwuargumentowy klasy Product
     * 
     */
    Product(int typ, int ileSztuk);
    

    Product operator-(int x);
    Product operator+(int x);
    Product operator*(int x);

    Product& operator++();
    Product operator++(int);

    Product& operator--();
    Product operator--(int);


    Product(const Product& other) = default;
    Product& operator=(const Product& other) = default;
};







#endif