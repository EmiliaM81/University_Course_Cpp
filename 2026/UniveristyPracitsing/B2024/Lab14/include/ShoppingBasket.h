#pragma once 

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

#include "Items.h"

class ShoppingBasket
{
    private:
        std::vector <std::shared_ptr<Item>> _vec;

    public:
        template <typename T>
        void addItem(T item) 
        {
            _vec.push_back(std::make_shared<T>(item));
        }

        void displayItems()
        {
            for (auto item: _vec)
            {
                std::cout<< *item;
            }
        }

        double getTotalPrice() const
        {
            double sum = std::accumulate(_vec.begin(), _vec.end(), 0.0, [](double suma, std::shared_ptr<Item> b){ return suma+ b->getPrice();});
            return sum;
        }

        void sortByName() 
        {
            std::sort(_vec.begin(), _vec.end(), [](std::shared_ptr<Item> a, std::shared_ptr<Item> b){return a->getName() < b->getName();});
        }

        void sortByPrice()
        {
            std::sort(_vec.begin(), _vec.end(), [](std::shared_ptr<Item> a, std::shared_ptr<Item> b){return a->getPrice() < b->getPrice();});

        }


};