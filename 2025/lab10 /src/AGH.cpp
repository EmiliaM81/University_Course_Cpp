#include "../include/AGH.h"  



std::string AGH::_name1 = "";
std::string AGH::_name2 = "";

// std::string AGH::_name = "";

int AGH::_choice = 1;

AGH* AGH::_ptr1 = new AGH();
AGH* AGH::_ptr2 = new AGH();





// AGH* AGH::_ptrTab = new AGH[10];
// int AGH::_ptrCount = 0;
// int AGH::_ptrTabSize = 10;

void AGH::Delete(void) 
{

    if (_ptr1)
        delete _ptr1;

    if (_ptr2)
        delete _ptr2;
    
}

AGH* AGH::Create(void)
{
    // if (_ptr1)
    //     delete _ptr;

    // AGH* newPtr = new AGH();
    // _ptr = newPtr;

    if (_choice == 1)
    {
        // if (_ptr1)
        //     delete _ptr1;
        // _ptr1 = nullptr;
        // AGH* newPtr = new AGH();
        // _ptr2 = newPtr;
        _choice = 2;
        return _ptr2;
    }

    if (_choice == 2)
    {
        // if (_ptr2)
        //     delete _ptr2;
        // _ptr2 = nullptr;

        // AGH* newPtr = new AGH();
        // _ptr1 = newPtr;
        _choice = 1;

        return _ptr1;
    }

    // AGH* newPtr = new AGH();
    // _ptr1 = newPtr;
    // return _ptr1; 

    return _ptr1;
    

}


AGH::AGH()
{
    //_name = "";
}

    

void AGH::SetName(std::string name)
{
    if (_choice == 1)
        _name1 = name;

    if (_choice == 2)
        _name2 = name;

    // _name = name;
}

void AGH::Presentation(void)
{
    if (_choice == 1)
    {
        std::cout << _name1 << "\n";
    } else {
        std::cout << _name2 << "\n";
    }

    //std::cout << _name << "\n";
}



