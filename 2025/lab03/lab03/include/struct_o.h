
#ifndef _STRUCT_O_H_
#define _STRUCT_O_H_


typedef struct StructO StructO;


#include "../include/struct_l.h"

struct StructO  {
    int valueO;
    StructL* ptr_to_L;
    
};


void print_structO(StructO* s);

#endif