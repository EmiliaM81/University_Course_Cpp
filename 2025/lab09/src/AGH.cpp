#include "../include/AGH.h"  



std::string AGH::_name = "";

AGH* AGH::_ptr = nullptr;


void AGH::Delete(void) 
{
    if (_ptr)
        delete _ptr;
}

AGH* AGH::Create(void)
{
    Delete();

    AGH* newPtr = new AGH();
    _ptr = newPtr;
    
    
    return _ptr;

}


AGH::AGH()
{
    _name = "";
}

    

void AGH::SetName(std::string name)
{
    _name = name;
}

void AGH::Presentation(void)
{
    std::cout << _name << "\n";
}



