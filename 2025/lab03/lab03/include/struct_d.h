
#ifndef _STRUCT_D_H_
#define _STRUCT_D_H_

typedef struct StructD StructD;

#include "../include/struct_i.h"




struct StructD{
    int valueD;
    StructI* ptr_to_I;
    
};

void print_structD(StructD* s);

#endif