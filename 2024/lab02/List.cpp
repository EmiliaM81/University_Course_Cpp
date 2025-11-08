#include "List.h"


void init(slist* list)
{
    list->head = nullptr;
}

void push_front(slist *list, char letter)
{
    slistEl* tempNode= list->head;

    //new Node
    slistEl* newNode = new slistEl;
    newNode->data = letter;
    
    //podmieniam new Node zeby byl pierwszy
    list->head = newNode;

    //daje poprzedni head aby byl drugim nodem
    newNode->next = tempNode;
}

void push_back(slist *list, char letter)
{
    slistEl* newNode = new slistEl;

    newNode->data = letter;
    newNode->next = nullptr;

    //jezeli lista jest pusta
    if (list->head == nullptr) 
    {
        list->head = newNode;
        return;
    }

    //szukanie ostatniego elementu
    slistEl* tempNode = list->head;

    while(tempNode->next != nullptr)
    {
        tempNode = tempNode->next;
        //std::cout << "kek\n" ;
    }

    tempNode->next = newNode;


}

slistEl* find(slist *list, char letter)
{

    slistEl* node = list->head;

    if (node == nullptr)
    {
        std::cout << "Lista jest pusta\n";
        return nullptr;
    }

    while (node != nullptr)
    {
        if (node->data == letter)
        {
            return node;
        }

        node = node->next;
    }

    std::cout << "Nie znaleziono elementu " << letter << " w liscie\n";
    return nullptr;
}

void printl(slist *list)
{
    slistEl* node= list->head;

    if (node == nullptr)
    {
        std::cout << "lista jest pusta\n";
        return;
    }

    std::cout << "Moja lista: <";

    while (node != nullptr)
    {
        std::cout << node->data;
        node = node->next;
    }

    std::cout<<">\n";
}

void removeEl(slist *list, char letter)
{
    if (list->head == nullptr)
    {
        std::cout << "Lista jest pusta\n";
        return;
    }


    if (list->head->data == letter)
    {
        slistEl* tempNode = list->head->next;
        delete list->head;
        list->head = tempNode;
        return;
    }


    slistEl* prevNode = list->head;

  

    while (prevNode->next != nullptr)
    {
        if (prevNode->next->data == letter)
        {
            
            // jezeli jest na koncu
            // if (prevNode->next->next == nullptr)
            // {
            //     delete prevNode->next;
            //     prevNode->next = nullptr;
            //     return;

            // } else {
                //jezeli jest posrodku
                slistEl* tempNode = prevNode->next->next;
                delete prevNode->next;

                prevNode->next = tempNode;
                return;


            // }
        }

        prevNode = prevNode->next;
    }

    std::cout<< "Brak podanego elementu w liscie\n";

}

void removeAllEl(slist *list, char letter)
{
    if (list->head == nullptr)
    {
        std::cout << "Lista jest pusta\n";
        return;
    }


    while(list->head->data == letter)
    {
        slistEl* tempNode = list->head->next;
        delete list->head;
        list->head = tempNode;
        
    }


    slistEl* prevNode = list->head;

  

    while (prevNode->next != nullptr)
    {
        if (prevNode->next->data == letter)
        {

            slistEl* tempNode = prevNode->next->next;
            delete prevNode->next;

            prevNode->next = tempNode;
            
            

        }
        else
        {

            prevNode = prevNode->next;
        }

    }

    return;

}


