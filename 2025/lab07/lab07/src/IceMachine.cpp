#include "IceMachine.h"
    
    
    
void IceMachine::SetID(int id)
{
    _id = id;
}

void IceMachine::SetState(bool state)
{
    _state = state;
}

void IceMachine::SetCapacity(double capacity)
{
    _capacity = capacity;
}

void IceMachine::SetConsumption(double consumption)
{
    _consumption = consumption;
}
void IceMachine::SetPowder(double powder)
{
    _powder = powder;
}

void IceMachine::Presentation(void)
{
    std::cout << "\n### Prezentacja ###\n";
    std::cout << "Identyfikator maszyny do lodow wloskich: " << _id << "\n";

    if (_state)
    {
        std::cout << "Maszyna do lodow wloskich jest wlaczona\n";
    } else {
        std::cout << "Maszyna do lodow wloskich jest wylaczona\n";
    }

    std::cout << "Pojemnosc maszyny do lodow wloskich wynosi " << _capacity <<" kilogramy/kilogramow\n";
    std::cout<<"Srednia wydajnosc wynosi " << _consumption << " kilogramow na 1 porcje\n";
    std::cout<<"W maszynie do lodow wloskich jest " << _powder << " kilogramow proszku\n";
}




void IceMachine::Start(void)
{
    std::cout << "\n### Uruchomienie maszyny do lodow wloskich ###\n";

    if (_powder == 0)
    {
        std::cout << "BLAD: Brak proszku, wsyp\n";
        return;
    }

    _state = true;

    std::cout << "Maszyna do lodow wloskich zostala wlaczona\n";
}

void IceMachine::Stop(void)
{
    std::cout << "\n### Zatrzymanie maszyny do lodow wloskich ###\n";
    std::cout << "Maszyna do lodow wloskich zostala wylaczona\n";

    _state = false;
}


void IceMachine::Make(int porcje)
{
    std::cout << "\n### Robienie lodow ###\n";
    if (porcje <= 0)
    {
        std::cout << "BLAD: Niepoprawna ilosc porcji\n";
        return;
    }

    if (_state == false)
    {
        std::cout << "BLAD: Wlacz maszyne do lodow wloskich\n";
        return;
    }

    if (_powder - _consumption*porcje <= 0)
    {
        std::cout << "Zrobiles " << _powder/_consumption << " porcji lodow\n";
        _powder = 0;
        return;
    }

    std::cout <<"Zrobiles " << porcje << " porcji lodow\n";

    _powder -= porcje * _consumption;



}
void IceMachine::Reload(int powder)
{
    std::cout << "\n### Wsypywanie proszku ###\n";

    if (_state == true)
    {
        std::cout << "BLAD: Wylacz maszyne do lodow wloskich przed wsypaniem proszku\n";
        return;
    }

    if (powder <=0 )
    {
        std::cout << "BLAD: Niepoprawna ilosc proszku do wsypania\n";
        return;
    }

    if (_powder + powder >= _capacity)
    {
        
        std::cout << "Wsypales " << _capacity - _powder << " kilogram/kilogramow proszku\n";
        _powder = _capacity;
        return;
    }

    _powder += powder;

    std::cout << "Wsypales " << powder << " kilogram/kilogramow proszku\n";
}