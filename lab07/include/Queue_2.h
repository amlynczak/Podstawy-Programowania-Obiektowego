#ifndef QUEUE_2_H
#define QUEUE_2_H

#include<array>
#include<iostream>

class Queue_2{
public:
/**
 * @brief Construct a new Queue_2 object
 * 
 */
    Queue_2();
    /**
     * @brief "wyrzuca" ostatni element z kolejki
     * 
     * @return int wartosc wyrzucanej liczby
     */
    int Dequeue();
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
    void Enqueue(int x);
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