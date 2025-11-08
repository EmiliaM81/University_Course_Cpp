#include "../include/Array.h"


int *InitArray(int size)
{
    if (size <= 0)
    {
        return nullptr;
    }

    int *array = new int[size];

    return array;
}


void CreateSequence (int *array, int size)
{
    if (size <= 0 || array == nullptr)
    {
        return;
    }

    array[0] = 0;

    if (size > 1)
    {
        for (int i=1; i<size; i++)
        {
            array[i] = array[i-1] + i;
        }
    }

}


int *ChangeArraySize(int* array, int size, int NewSize)
{
    if (array == nullptr || size < 1 || NewSize <1)
    {
        DeleteArray(array);
        return nullptr;
    }

    int* newArray = new int[NewSize];

    if (NewSize > size)
    {
        for (int i=0; i<size; i++)
        {
            newArray[i] = array[i];
        }
    } else {
        for (int i=0; i<NewSize; i++)
        {
            newArray[i] = array[i];
        }
    }

    DeleteArray(array);

    return newArray;
}



void DeleteArray(int *array)
{
    if (array != nullptr)
    {
        delete [] array;
        array = nullptr;
    }
}