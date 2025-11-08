#include "../include/calculator.h"
#include <iostream>

double basic_operation(double var1, double var2, char var3)
{
    switch (var3)
    {
        case '+':
            return var1+var2;
        case '-':
            return var1-var2;
        case '*':
            return var1*var2;
        case '/':
            if (var2 == 0)
            {
                std::cout << "Error: Division by zero!\n";
                return 0;
            }
            return var1/var2;
        default:
            std::cout << "Error: Unknown operation '" << var3 <<"'\n";
            return 0;
    }
}

#ifdef FULL_FUNCTIONALITY

void print_operation_info(char info)
{
    if (info == '^')
    {
        std::cout <<"Operation '" << info << "' is is exponentiation\n";
    }
}

double advanced_calculation(double var1, double var2, char var3)
{
    if (var3 == '^')
    {
        double zmienna = 1;

        for (int i=0; i<4; i++)
        {
            zmienna *= var1;
        }

        return zmienna;
    }


    return 0;
}

#endif

#ifdef BROKEN_VERSION




#endif