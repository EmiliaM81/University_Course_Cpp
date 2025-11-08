#ifndef _STRUCT_N_H_
#define _STRUCT_N_H_


typedef struct StructN StructN;


#include "../include/struct_a.h"

struct StructN {
    int valueN;
    StructA* ptr_to_A;
    
};


void print_structN(StructN* s);


#endif