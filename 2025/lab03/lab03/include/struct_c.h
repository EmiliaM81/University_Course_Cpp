
#ifndef _STRUCT_C_H_
#define _STRUCT_C_H_

typedef struct StructC StructC;

#include "../include/struct_f.h"




struct StructC {
    int valueC;
    StructF* ptr_to_F; 
    
};

void print_structC(StructC* s);

#endif