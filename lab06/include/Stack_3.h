#ifndef STACK_3_H
#define STACK_3_H

#include<iostream>

class Stack_3{
public:
    /**
     * @brief Construct a new Stack_3 object
     * 
     * @param size rozmiar tablicy dynamicznej
     */
    Stack_3(int size);
    /**
     * @brief Destroy the Stack_3 object
     * 
     */
    ~Stack_3();
    /**
     * @brief "wyrzuca" ostatni element z stacka
     * 
     * @return int wartosc wyrzucanej liczby
     */
    int Pop();
    /**
     * @brief sprawdza czy tablica jest pusta
     * 
     * @return int 1 - jest pusta
     * @return int 0 - nie jest pusta
     */
    int IsEmpty();
    /**
     * @brief sprawdza czy tablica jest pelna
     * 
     * @return int 1 - jest pelna
     * @return int 0 - nie jest pelna
     */
    int IsFull();
    /**
     * @brief wrzuca na ostatnie miejsce wartosc x
     * 
     * @param x 
     */
    void Push(int x);
    /**
     * @brief drukuje calosc na ekranie
     * 
     */
    void Print();
    /**
     * @brief zwraca rozmiar aktualnej tablicy
     * 
     * @return int 
     */
    int Size();
    /**
     * @brief czysci cala tablice
     * 
     */
    void Clear(); 
private:
    int _size;
    int _size_max;
    int* _tab;
    
};

#endif