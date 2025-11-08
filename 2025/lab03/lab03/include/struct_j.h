
#ifndef _STRUCT_J_H_
#define _STRUCT_J_H_

typedef struct StructJ StructJ;

#include "../include/struct_m.h"



struct StructJ {
    int valueJ;
    StructM* ptr_to_M;
    StructJ* ptr_to_J;
    
};


void print_structJ(StructJ* s);


#endif