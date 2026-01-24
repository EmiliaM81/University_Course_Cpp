#ifndef _SERVICE_H_
#define _SERVICE_H_

#include "IceMachine.h"

class Service
{

    public:

        /** @brief Test Serwisowy podanej maszyny
         * 
         * Na maszynie wykonywana jest seria, testow
         * Najpierw daje prochu do pelna, wlacza maszyne, wykonuje lody
         * i wylacza ja, daje prezentacje 
         * 
         * @param[in] usage ilosc lodow do zrobienia
         * @param[in] machine maszyna do testow
         * 
         *  @return nic nie zwraca
         * 
         */
        void Test(IceMachine* machine, double usage);


        /** @brief Test Serwisowy kopii podanej maszyny
         * 
         * Na kopi maszyny wykonywana jest seria, testow
         * Najpierw daje prochu do pelna, wlacza maszyne, wykonuje lody
         * i wylacza ja, daje prezentacje 
         * 
         * @param[in] usage ilosc lodow do zrobienia
         * @param[in] machine kopia maszyny do testow
         * 
         *  @return nic nie zwraca
         * 
         */
        void TestCopy(IceMachine machine, double usage);


};


#endif