#ifndef ARMY_H
#define ARMY_H

#include<vector>
#include<iostream>
#include"AndroidSoldier.h"

/**
 * @brief Armia AndroidSoldierow
 * 
 */
class Army{
public:
    /**
     * @brief usunecie ostatniego zolnierza z wektora
     * 
     */
    void Remove();

    /**
     * @brief dodawanie nowego zolnierza do wektora
     * 
     * @param soldier 
     */
    void Add(const AndroidSoldier& soldier);

    /**
     * @brief wyczyszczenie armii
     * 
     */
    void Clear();

    /**
     * @brief dodawanie dla Army
     * ilosc dla kazdego zolnierza wzrasta o value
     * 
     * @param value 
     * @return Army& 
     */
    Army& operator+(int value);

    /**
     * @brief odejmowanie dla Army
     * ilosc dla kazdego zolnierza zmniejsza sie o value
     * (z zachowaniem zasad dla odejmowania AndroidSoldier)
     * 
     * @param value 
     * @return Army& 
     */
    Army& operator-(int value);

    /**
     * @brief mnozenie dla Army
     * ilosc dla kazdego zolnierza mnozy sie o value
     * 
     * @param value 
     * @return Army& 
     */
    Army& operator*(int value);

    /**
     * @brief zwraca pojedynczego AndroidSoldier o indeksie
     * 
     * @param index 
     * @return AndroidSoldier& 
     */
    AndroidSoldier& operator[](int index);

    /**
     * @brief operator= dla Arm
     * 
     * @param other 
     * @return Army& 
     */
    Army& operator=(const Army& other);

    /**
     * @brief operator<< do wypisywania informacji o Army
     * 
     * @param os 
     * @param a 
     * @return std::ostream& 
     */
    friend std::ostream& operator<<(std::ostream& os, const Army& a);
private:
    std::vector<AndroidSoldier> _soldiers;
};

#endif