
#ifndef _STRUCT_K_H_
#define _STRUCT_K_H_

typedef struct StructK StructK;

#include "../include/struct_o.h"




struct StructK  {
    int valueK;
    StructO* ptr_to_O;
};

void print_structK(StructK* s);

#endif