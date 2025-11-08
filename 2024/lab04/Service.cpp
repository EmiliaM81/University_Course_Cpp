#include "Service.h"


void Service::Test(Car *MyCar, double road)
{
    std::cout <<"\n#############################################################\n";
    std::cout<<"### Test serwisowy ###\n";
    std::cout<<"\n1. Tankowanie do pelna:";


    MyCar->Refuel(MyCar->getTankCapacity());
    std::cout<<"2. Jazda testowa: "<<road<< " km:";
    MyCar->Start();
    MyCar->Drive(road);
    MyCar->Stop();
    std::cout<<"\n### Koniec testu serwisowego ###\n";
    std::cout<<"#############################################################\n";


}

void Service::TestCopy(Car MyCar, double road)
{
    std::cout<<"\n#############################################################\n";
    std::cout<<"### Test serwisowy na egzemplarzu fabrycznym o identycznych parametrach ###\n";
        std::cout<<"\n1. Tankowanie do pelna:";


    MyCar.Refuel(MyCar.getTankCapacity());
    std::cout<<"2. Jazda testowa: "<<road<< " km:";
    MyCar.Start();
    MyCar.Drive(road);
    MyCar.Stop();
    std::cout<<"\n### Koniec testu serwisowego ###\n";
    std::cout<<"#############################################################\n";


}

