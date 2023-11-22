#ifndef STACK_1_H
#define STACK_1_H

#include<iostream>

/**
 * @brief klasa Stack_1 - tablica statyczna o rozmiarze 4
 * 
 */
class Stack_1{
public:
    /**
     * @brief Construct a new Stack_1 object
     * 
     */
    Stack_1();

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
    int _tab[4];
    int _size;
};

#endif