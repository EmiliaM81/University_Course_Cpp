

#ifndef _STRUCT_L_H_
#define _STRUCT_L_H_

typedef struct StructL StructL;


#include "../include/struct_e.h"

struct StructL {
    int valueL;
    StructL* ptr_to_L;
    StructE* ptr_to_E;
    
};



void print_structL(StructL* s);

#endif