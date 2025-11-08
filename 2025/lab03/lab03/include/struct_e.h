

#ifndef _STRUCT_E_H_
#define _STRUCT_E_H_

typedef struct StructE StructE;


#include "../include/struct_k.h"

struct StructE {
    int valueE;
    StructK* ptr_to_K;
    
};


void print_structE(StructE* s);

#endif