#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


class Book
{
    friend class BookManager; 

    friend std::ostream &operator<<(std::ostream &os, const Book &obj)
    {
        os << "Title: " << obj._title <<", Author: " << obj._author << ", Year: " << obj._year << ", Price: " << obj._price;
        return os; 
    }

    private:
        std::string _title;
        std::string _author;
        int _year;
        double _price;

    public:
        Book(std::string title, std::string author, int year, double price):
            _title(title), _author(author), _year(year), _price(price) {};
        
};



class BookManager
{
private:
    std::vector<Book*> _books;
public:
    BookManager() = default;

    ~BookManager()
    {
        for (Book* book: _books)
        {
            delete book;
        }
    }

    inline void addBook(std::string title, std::string author, int year, double price)
    {
        Book* book = new Book(title, author, year, price);
        _books.push_back(book);
    }

    inline void displayAllBooks()
    {


        for (Book* book: _books)
        {
            std::cout << *book << "\n";
        }
    }

    inline void sortBooksByTitle()
    {
        std::sort(_books.begin(), _books.end(), [](Book* a, Book* b){return a->_title < b->_title;});
    }


    inline Book *findBookByTitle(std::string title)
    {
        auto it = std::find_if(_books.begin(), _books.end(), [&title](Book* book){ return book->_title == title;});

        if (it != _books.end())
        {
            return *it;
        }

        return nullptr;
    }

    inline void removeBook(std::string title)
    {
        Book *book = findBookByTitle(title);

        _books.erase(std::remove(_books.begin(), _books.end(), book));
    }


    
};

void displayBook(Book book)
{
    std::cout << book << "\n";
}