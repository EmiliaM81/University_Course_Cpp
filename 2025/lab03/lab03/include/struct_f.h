#ifndef _STRUCT_F_H_
#define _STRUCT_F_H_

typedef struct StructF StructF;


#include "../include/struct_b.h"

struct StructF {
    int valueF;
    StructB* ptr_to_B;
    
};


void print_structF(StructF* s);

#endif