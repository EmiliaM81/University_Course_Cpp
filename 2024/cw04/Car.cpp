#include "Car.h"
#include <iostream>

Car::Car()
{
    id = 0;
    state = false;
    tankCapacity = 0.0;
    consumption = 0.0;
    fuel = 0.0;
}


void Car::SetID(int id)
{
    this->id = id;
}

void Car::SetState(bool state)
{
    this->state = state;
}

void Car::SetTankCapacity(double tankCapacity)
{
    this->tankCapacity=tankCapacity;
}

void Car::SetConsumption(double consumption)
{
    this->consumption = consumption;
}

void Car::SetFuel(double fuel)
{
    this->fuel = fuel;
}


double Car::GetTankCapacity()
{
    return this->tankCapacity;
}




void Car::Presentation(void)
{
    std::cout << "\n### Prezentacja ###\n";
    std::cout << "Identyfikator samochodu: " << id << "\n";
    if (state == true)
    {
        std::cout <<"Samochod jest wlaczony\n";
    } else {
        std::cout <<"Samochod jest wylaczony\n";
        
    }
    std::cout <<"Pojemnosc baku wynosi "<< tankCapacity<<" litrow\n";

    std::cout << "Srednie spalanie wynosi " << consumption << " litrow / 100 km\n";
    std::cout << "W baku jest "<< fuel<< " litrow paliwa\n";

}


void Car::Drive(int distance)
{
    std::cout <<"\n### Jazda ###\n";
    if (distance <=0)
    {
        std::cout << "BLAD: Niepoprawny dystans\n";
        return;
    }

    if (state == false)
    {
        std::cout << "BLAD: Wlacz silnik\n";
        return;
    }   

    if (fuel/(consumption/100) <= distance)
    {
        std::cout << "Przejechales " << fuel *consumption << " km\n";
        fuel = 0.0;
        return;
    }

    std::cout << "Przejechales " << distance << " km\n";
    fuel = fuel - (consumption/100) * distance;

    
}

void Car::Start()
{
    std::cout << "\n### Uruchomienie samochodu ###\n";
    if (fuel == 0.0)
    {
        std::cout << "BLAD: Brak paliwa, zatankuj\n";
        return;
    }

    state = true;
    std::cout<<"Silnik zostal wlaczony\n";

    
}

void Car::Refuel(int newFuel)
{
    std::cout << "\n### Tankowanie ###\n";

    if (state == true)
    {
        std::cout << "BLAD: Wylacz samochod przed tankowaniem\n";
        return;
    }

    if (newFuel <=0)
    {
        std::cout << "BLAD: Niepoprawna ilosc paliwa do zatankowania\n";
        return;
    }

    if (fuel + newFuel >=tankCapacity)
    {
        
        std::cout << "Zatankowales " << tankCapacity-fuel << " litrow\n";
        fuel = tankCapacity;
        return;
    }

    fuel +=newFuel;

    std::cout << "Zatankowales " << newFuel << " litrow\n";


}

void Car::Stop()
{
    std::cout << "\n### Zatrzymanie samochodu ###\n";
    std::cout << "Silnik zostal wylaczony\n";
    state = false;
}


