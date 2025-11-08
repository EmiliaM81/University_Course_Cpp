#include "Array.h"

int* InitArray(int size)
{

    if (size > 0)
    {
        int *arr = new int[size];
        return arr;
    }
    return nullptr;
}

void CreateSequence(int *arr, int size)
{

    if (size > 0 && arr != nullptr)
    {
        arr[0] = 1;
        for (int i=1; i<size; i++)
        {
            arr[i] = arr[i-1] * i;
        }
    }
}

void DeleteArray(int *arr)
{
    if (arr)
    {
        delete [] arr;
        arr = nullptr;
    }
    
}
