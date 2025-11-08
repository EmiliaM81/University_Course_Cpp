#include "Service.h"
#include <iostream>

void Service::Test(Car* car, double road)
{
    std::cout << "\n#############################################################\n";
    std::cout << "### Test serwisowy ###\n\n";

    std::cout << "1. Tankowanie do pelna:";
    car->Refuel(car->GetTankCapacity());
    std::cout<<"2. Jazda testowa: 10 km:";
    car->Start();
    car->Drive(road);
    car->Stop();
    std::cout<<"\n### Koniec testu serwisowego ###\n";
    std::cout<<"#############################################################\n";


}


void Service::TestCopy(Car car, double road)
{
    std::cout << "\n#############################################################\n";
    std::cout << "### Test serwisowy na egzemplarzu fabrycznym o identycznych parametrach ###\n\n";

    std::cout << "1. Tankowanie do pelna:";
    car.Refuel(car.GetTankCapacity());
    std::cout<<"2. Jazda testowa: 10 km:";
    car.Start();
    car.Drive(road);
    car.Stop();
    std::cout<<"\n### Koniec testu serwisowego ###\n";
    std::cout<<"#############################################################\n";


}
