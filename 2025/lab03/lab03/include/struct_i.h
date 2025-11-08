
#ifndef _STRUCT_I_H_
#define _STRUCT_I_H_

typedef struct StructI StructI;


#include "../include/struct_c.h"

struct StructI {
    int valueI;
    StructC* ptr_to_C;
    StructI* ptr_to_I;

    
};


void print_structI(StructI* s);

#endif