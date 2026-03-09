#ifndef _BOOKARCHIVEAPP_H_
#define _BOOKARCHIVEAPP_H_


#include <vector>
#include <iostream>
#include <algorithm>

#include "IKsiazka.h"
#include "User.h"

class BookArchiveApp
{
private:
    std::vector<IKsiazka*> _vec;
public:
    BookArchiveApp() = default;
    ~BookArchiveApp();

   void addMaterialToBase(IKsiazka* obj);
   void putOnBookshelf(std::string title, User &user, std::string state);
   void rateBook(std::string title, User user, int rate);
   void displayAllBooks();
};


#endif


