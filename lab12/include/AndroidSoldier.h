#ifndef ANDROIDSOLDIER_H
#define ANDROIDSOLDIER_H

#include<iostream>

/**
 * @brief klasa AndroidSoldier - pojedynczy zolnierz
 * 
 */
class AndroidSoldier{
public:
    /**
     * @brief Construct a new Android Soldier object
     * 
     * @param typ typ zolnierza
     * @param ilosc ilosc zolnierzy
     */
    AndroidSoldier(int typ, int ilosc);

    /**
     * @brief operator ++ (preinkrementacja) dla AndroidSoldier
     * zwieksza parametr _amount o 1
     * 
     * @return AndroidSoldier& 
     */
    AndroidSoldier& operator++();

    /**
     * @brief operator++ (postinkrementacja) dla AndroidSoldier
     * zwieksza parametr _amount o 1
     * 
     * @return * AndroidSoldier 
     */
    AndroidSoldier operator++(int); 

    /**
     * @brief operator-- (predekrementacja) dla AndroidSolider
     * _amount -= 1
     * 
     * @return AndroidSoldier& 
     */
    AndroidSoldier& operator--();

    /**
     * @brief operator-- (postdekrementacja)
     * _amount -= 1
     * 
     * @return * AndroidSoldier 
     */
    AndroidSoldier  operator--(int); 

    /**
     * @brief dodawanie dla AndroidSoldier
     * _amount = _amount + value
     * 
     * @param value 
     * @return AndroidSoldier 
     */
    AndroidSoldier  operator+(int value);

    /**
     * @brief odejmowanie dla klasy
     * _amount = _amount - value
     * OGRANICZENIE - _amount nie moze byc ujemne
     * 
     * @param value 
     * @return AndroidSoldier 
     */
    AndroidSoldier  operator-(int value);

    /**
     * @brief mnozenie dla klasy
     * _amount = _amount * value
     * 
     * @param value 
     * @return AndroidSoldier 
     */
    AndroidSoldier  operator*(int value);

    /**
     * @brief operator<< dla AndroidSolider - wypisywanie informacji
     * 
     * @param os 
     * @param sol 
     * @return std::ostream& 
     */
    friend std::ostream& operator<<(std::ostream& os, const AndroidSoldier& sol);
private:
    int _type;
    int _amount;
};

#endif