#pragma once


#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>

class Worker {

    private:
        std::string _name;
        std::string _position;
        int _hours;
        double _pay;

    public:
        Worker(std::string name, std::string position, int hours, double pay):
            _name(name), _position(position), _hours(hours), _pay(pay) {};
        
        ~Worker() = default;

        inline double getSalary() const
        {
            if (_position == "Programista")
                return 5000.0;
            return _hours * _pay;   
        }

        inline double getHours() const
        {
            return _hours;
        }

        inline std::string getPosition() const
        {
            return _position;
        }

        inline std::string getName() const
        {
            return _name;
        }
         
        inline std::string getSurname() const 
        {
            auto pos = _name.find(' ');

            return _name.substr(pos + 1);
        }

        friend std::ostream &operator<<(std::ostream &os, const Worker &obj)
        {
            os << obj.getName() << " - " << obj.getSalary() << " PLN";
            return os;
        }
};

class Company
{
private:
    std::vector<Worker> _vec;
public:
    Company() =default;
    ~Company()=default;


    inline void addEmployee(std::string name, std::string position, int hours, double pay)
    {
        Worker worker(name, position, hours, pay);
        if (worker.getPosition() == "Manager" || worker.getPosition() == "Programista" || worker.getPosition() == "Księgowa" )
        {
            _vec.push_back(worker);

            std::sort(_vec.begin(), _vec.end(), [](Worker &a, Worker &b){ return a.getSurname() < b.getSurname();});
        }
    }

        

    inline void displayEmployees()
    {
        std::cout << "\n";
        for (Worker el: _vec)
        {
            
            std::cout << el << "\n";
        }

        std::cout << "\n";

    }

    
    inline void sortEmployees(std::function<bool(Worker &a, Worker &b)> f)
    {
        std::sort(_vec.begin(), _vec.end(), f);
    }

    inline void removeEmployees(std::function<bool(Worker &a)> f)
    {
        _vec.erase(std::remove_if(_vec.begin(), _vec.end(), f), _vec.end());
    }
};


