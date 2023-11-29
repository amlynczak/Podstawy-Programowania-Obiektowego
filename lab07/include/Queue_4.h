#ifndef QUEUE_4_H
#define QUEUE_4_H

#include<iostream>
#include<vector>

class Queue_4{
public:
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
    std::vector<int> _vec;
};

#endif