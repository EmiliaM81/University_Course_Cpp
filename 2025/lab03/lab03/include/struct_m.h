

#ifndef _STRUCT_M_H_
#define _STRUCT_M_H_

typedef struct StructM StructM;

#include "../include/struct_j.h"


struct StructM {
    int valueM;
    StructJ* ptr_to_J;
    StructM* ptr_to_M
    
};



void print_structM(StructM* s);

#endif