#ifndef _USER_H_
#define _USER_H_



#include <string>
#include <vector>
#include <iostream>

class User
{
    friend class BookArchiveApp;
private:
    std::string _name;
    std::vector<std::string> _read;
    std::vector<std::string> _toRead;

public:
    User(std::string _name);
    ~User()=default;

    std::string getName();
    void displayPersonalBookshelf();
};

#endif

