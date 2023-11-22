#ifndef STACK_2_H
#define STACK_2_H

#include<array>
#include<iostream>

class Stack_2{
public:
/**
 * @brief Construct a new Stack_2 object
 * 
 */
    Stack_2();
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
    std::array<int, 4> _arr;
    int _size;
};
#endif