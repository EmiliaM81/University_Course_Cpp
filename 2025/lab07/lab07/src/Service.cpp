#include "Service.h"



void Service::Test(IceMachine* machine, double usage)
{
    std::cout <<"\n#############################################################\n";
    std::cout << "### Test serwisowy ###\n";

    std::cout << "\n1. Wsyp proszek do pelna:";
    machine->Reload(machine->_capacity);

    std::cout << "2. Przebieg testowy: "<< usage << " porcji:";
    machine->Start();
    machine->Make(usage);
    machine->Stop();
    std::cout << "\n### Koniec testu serwisowego ###\n";
    std::cout << "#############################################################\n";

}

void Service::TestCopy(IceMachine machine, double usage)
{
    std::cout <<"\n#############################################################\n";
    std::cout << "### Test serwisowy na egzemplarzu fabrycznym o identycznych parametrach\n";

    std::cout << "\n1. Wsyp proszek do pelna:";
    machine.Reload(machine._capacity);

    std::cout << "2. Przebieg testowy: "<< usage << " porcji:";
    machine.Start();
    machine.Make(usage);
    machine.Stop();
    std::cout << "\n### Koniec testu serwisowego ###\n";
    std::cout << "#############################################################\n";

}


