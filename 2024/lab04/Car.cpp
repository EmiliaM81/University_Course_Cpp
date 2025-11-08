#include "Car.h"


#include <iostream>

void Car::SetID(int newID)
{
    this->id = newID;
}

void Car::SetState(bool newState)
{
    this->state = newState;
}

void Car::SetTankCapacity(double newTankCapacity)
{
    this->tankCapacity = newTankCapacity;
}

void Car::SetConsumption(double newConsumption)
{
    this->consumption = newConsumption;
} 

void Car::SetFuel(double newFuel)
{
    this->fuel = newFuel;
}

void Car::Presentation(void)
{
    std::cout<<"\n### Prezentacja ###\n";
    std::cout<<"Identyfikator samochodu: "<<this->id<<'\n';
    
    if (this->state == true)
    {
        std::cout <<"Samochod jest wlączony\n";
    } else {
        std::cout <<"Samochod jest wylączony\n";
    }

    std::cout << "Pojemnosc baku wynosi "<< this->tankCapacity<<" litrow\n";

    std::cout << "Srednie spalanie wynosi " <<this->consumption<< " litrow / 100 km\n";
    std::cout <<"W baku jest " << this->fuel << " litrow paliwa\n";
}

void Car::Drive(double distance)
{
    std::cout<<"\n### Jazda ###\n";

    if (distance < 0)
    {
        std::cout<<"BLAD: Niepoprawny dystans\n";
        return;
    } 

    if (this->state == 0)
    {
        std::cout<<"BLAD: Wlacz silnik\n";
        return;
    }

    if (this->fuel == 0.0)
    {   
        std::cout<<"BLAD: Brak paliwa, zatankuj\n";
        return;
        
    }

    if ((this->fuel) - (consumption) * ((double)distance/100)  < 0)
    {
        distance = 100*(this->fuel/(consumption));
        this->fuel = 0.0;
        std::cout<<"Przejechałeś " << distance <<" km\n";
        return;
    }

    this->fuel -= consumption* ((double)distance/100);


    std::cout<<"Przejechałeś " << distance <<" km\n";




} 

void Car::Start(void)
{
    std::cout << "\n### Uruchomienie samochodu ###\n";
    {
        if (this->fuel == 0)
        {
            std::cout<<"BLAD: Brak paliwa, zatankuj\n";
            return;
        }
    }


    if (this->state == 1)
    {
        std::cout <<"BŁĄD: Silnik juz uruchomiony\n";
        return;
    }
    SetState(1);
    std::cout<<"Silnik zostal wlaczony\n";

}


void Car::Refuel(double howMuch)
{
    std::cout<<"\n### Tankowanie ###\n";
    if (this->state == 1)
    {
        std::cout<<"BLAD: Wylacz samochod przed tankowaniem\n";
        return;
    }

    if (howMuch <=0 ) 
    {
        std::cout <<"BLAD: Niepoprawna ilosc paliwa do zatankowania\n";
        return;
    }

    if (this->fuel + howMuch > this->tankCapacity)
    {
        howMuch = this->tankCapacity - this->fuel;
    }

    this->fuel += howMuch;
    std::cout << "Zatankowales " << howMuch << " litrow\n";
}

void Car::Stop(void)
{
    std::cout<<"\n### Zatrzymanie samochodu ###\n";
    if (this->state == 0)
    {
        std::cout <<"BŁĄD: Silnik juz wyłąćzony\n";
        return;
    }
    SetState(0);
    std::cout<<"Silnik zostal wylaczony\n";
}


double Car::getTankCapacity(void)
{
    return this->tankCapacity;
}

double Car::getFuel(void)
{
    return this->fuel;
}
