#include "User.h"

User::User(std::string name):
    _name(name) {};


std::string User::getName()
{
    return _name;
}

void User::displayPersonalBookshelf()
{

    std::cout << "Chcę przeczytać: \n";
    for (auto el: _toRead)
    {
        std::cout << "- " <<el << "\n";
    }
    std::cout << "Przeczytałem: \n";
    for (auto el: _read)
    {
        std::cout <<  "- " << el << "\n";
    }
}
