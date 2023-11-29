#ifndef QUEUE_3_H
#define QUEUE_3_H

#include<iostream>

class Queue_3{
public:
    /**
     * @brief Construct a new Queue_3 object
     * 
     * @param size rozmiar tablicy dynamicznej
     */
    Queue_3(int size);
    /**
     * @brief Destroy the Queue_3 object
     * 
     */
    ~Queue_3();
    /**
     * @brief "wyrzuca" pierwszy element z kolejki
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
    int _size;
    int _size_max;
    int* _tab;
    
};

#endif