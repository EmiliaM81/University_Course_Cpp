#include "List.h"

#include <iostream>

void init(slist* list)
{
    list->head = nullptr;
}

void push_front(slist *list, char letter)
{

    slistEl* tmp= list->head;

    slistEl* node = new slistEl;
    node->data = letter;



    list->head = node;

    node->next = tmp;
}

void push_back(slist *list, char letter)
{
    slistEl* node = new slistEl;

    node->data = letter;
    node->next = nullptr;



    if (list->head == nullptr) 
    {
        list->head = node;
        return;
    }
    


    slistEl* tmp = list->head;

    while(tmp->next != nullptr)
    {
        tmp = tmp->next;
    }

    tmp->next = node;


}

slistEl* find(slist *list, char letter)
{

    slistEl* node = list->head;


    while (node != nullptr)
    {
        if (node->data == letter)
        {
            return node;
        }

        node = node->next;
    }


    return nullptr;
}

void printl(slist *list)
{
    slistEl* node= list->head;


    std::cout << "Moja lista: <";

    while (node != nullptr)
    {
        std::cout << node->data;
        node = node->next;
    }

    

    std::cout<<">\n";
}

void clear(slist* list)
{
    slistEl* node = list->head;

    while (node != nullptr)
    {

        slistEl* tmp = node->next;
        delete node;
        node = tmp;


    }


    
    list->head = nullptr;


}


