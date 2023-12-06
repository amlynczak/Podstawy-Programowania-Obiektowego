#ifndef ARMY_H
#define ARMY_h

#include<vector>
#include"Soldier.h"

/**
 * @brief clasa Army, posiadajaca w sobie wektor zolnierzy(AndroidSoldier)
 * 
 */
class Army{
public:
    /**
     * @brief Construct a new Army object - domyslny
     * 
     */
    Army();

    /**
     * @brief Construct a new Army object - z jednym zolnierzem
     * 
     * @param sol zolnierz, ktorego wpisujemy do armii
     */
    Army(AndroidSoldier sol);

    /**
     * @brief Construct a new Army object - z dwoma zolnierzami
     * 
     * @param sol1 zolnierz 1
     * @param sol2 zolnierz 2
     */
    Army(AndroidSoldier sol1, AndroidSoldier sol2);

    /**
     * @brief Construct a new Army object - z tablica zolnierzy
     * 
     * @param size rozmiar tablicy (ilosc zolnierzy)
     * @param tab tablica z zolnierzami
     */
    Army(int size, AndroidSoldier* tab[]);

    /**
     * @brief Construct a new Army object - wektorem zolnierzy
     * 
     * @param vec dany wektor zolnierzy
     */
    Army(std::vector<AndroidSoldier>& vec);

    /**
     * @brief Construct a new Army object - kostruktor kopjujacy
     * 
     * @param other inna armia, ktora skopjujemy
     */
    Army(const Army& other);

    /**
     * @brief Construct a new Army object - konstruktor przenaszacy
     * 
     * @param other przenoszona armia
     */
    Army(Army&& other);

    /**
     * @brief Destroy the Army object
     * 
     */
    ~Army();

    /**
     * @brief wypisanie wszystkich zolnierzy zapisanch do armii
     * 
     * @return funkcja nic nie zwraca
     */
    void Print();

    /**
     * @brief usuniecie zolnierza z armi (ostatniego)
     * 
     * @return funkcja nic nie zwraca
     */
    void Remove();

    /**
     * @brief dodanie nowego zolnierza do armii
     * 
     * @param sol nowy zolnierz
     * @return funckja nic nie zwraca
     */
    void Add(AndroidSoldier sol);

    /**
     * @brief usuniece wszystkich zolnierzy z armii
     * 
     * @return funckja nic nie zwraca
     */
    void Clear();

private:
    std::vector<AndroidSoldier> _armia;
};

#endif