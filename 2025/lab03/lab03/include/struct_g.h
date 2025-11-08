
#ifndef _STRUCT_G_H_
#define _STRUCT_G_H_

typedef struct StructG StructG;


#include "../include/struct_n.h"

struct  StructG{
    int valueG;
    StructN* ptr_to_N;
    
};


void print_structG(StructG* s);

#endif