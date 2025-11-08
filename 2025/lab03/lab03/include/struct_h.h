
#ifndef _STRUCT_H_H_
#define _STRUCT_H_H_

typedef struct StructH StructH;


#include "../include/struct_d.h"

struct StructH {
    int valueH;
    StructD* ptr_to_D;
    
};


void print_structH(StructH* s);

#endif