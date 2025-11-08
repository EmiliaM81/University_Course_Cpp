




#ifndef _STRUCT_A_H_
#define _STRUCT_A_H_


typedef struct StructA StructA;

#include "../include/struct_g.h"



struct StructA {
    int valueA;
    StructG* ptr_to_G;
    StructA* ptr_to_A;

    
};

void print_structA(StructA* s);

#endif

