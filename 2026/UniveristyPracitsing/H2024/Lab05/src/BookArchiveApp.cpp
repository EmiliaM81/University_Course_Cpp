#include "BookArchiveApp.h"


void BookArchiveApp::addMaterialToBase(IKsiazka* obj)
{
    _vec.push_back(obj);
}

void BookArchiveApp::putOnBookshelf(std::string title, User &user, std::string state)
{
    bool contains = false;
    for (auto el: _vec)
    {
        if (el->getTitle() == title)
            contains = true;
    }


    if (!contains)
    {
        std::cout << "Przepraszamy - w naszej bazie nie ma książki pod tytułem "<< title;
        return;
    }

    if (state == "Chcę przeczytać")
        user._toRead.push_back(title);
    else if (state == "Przeczytałem")
        user._read.push_back(title);

    std::cout << "\n";

}

void BookArchiveApp::rateBook(std::string title, User user, int rate)
{

    for (auto el: user._read)
    {
        if (el == title)
        {
            for (auto el1: _vec)
            {
                if (el1->getTitle() == title)
                {
                    el1->addRating(rate);
                    return;
                }
                    
            } 
        }
    }

    std::cout<< "Przepraszamy - nie można ocenić książki, której się nie przeczytało.\n";
}


void BookArchiveApp::displayAllBooks()
{
    std::sort(_vec.begin(), _vec.end(), [](IKsiazka *a, IKsiazka *b) {return a->getTitle() < b->getTitle();});

    for (auto el: _vec)
    {
        el->wyswietlInformacje();
        el->getRatingStr();
    }
}


BookArchiveApp::~BookArchiveApp()
{
    for (auto el: _vec)
    {
        if (el != nullptr)
            delete el;
    }
}