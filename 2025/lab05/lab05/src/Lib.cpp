#include "../include/Lib.h"
#include <iostream>


int j = 0;
int i = 0;
extern int k;

void fun3()
{
    i++;
    j++;
    std::cout<<"----------\n";
    std::cout << "i = "<<i<<"\n";
    std::cout << "j = "<<j<<"\n";
    std::cout<<"----------\n";
}

void fun2()
{

    std::cout<<"----------\n";
    std::cout << "i = "<<++i<<"\n";
    std::cout << "j = "<<++j<<"\n";
    std::cout << "k = "<<++k<<"\n";
    
    
    
    fun1();
    std::cout<<"----------\n";
 
}

void fun1()
{
    static int i = 0;



    i++;
    j++;
    std::cout<<"----------\n";
    std::cout << "i = "<<i<<"\n";
    std::cout << "j = "<<j<<"\n";
    std::cout<<"----------\n";


}