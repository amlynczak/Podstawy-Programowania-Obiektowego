#ifndef ANDROIDSOLDIER_H
#define ANDROIDSOLDIER_H

#include<string>

/**
 * @brief klasa AndroidSoldier - klasa pojedynczego zolnierza
 * 
 */
class AndroidSoldier{
public:
    /**
     * @brief Construct a new Android Soldier object - typ oraz karta 
     * 
     * @param typ typ
     * @param karta karta
     */
    AndroidSoldier(int typ, int karta);

    AndroidSoldier(int typ){
        _type = typ;
        _card = 0;
    }

    /**
     * @brief Destroy the Android Soldier object
     * 
     */
    ~AndroidSoldier();

    /**
     * @brief wypisanie informacji o pojedynczym zolnierzu
     * 
     * @return funkcja nic nie zwraca
     */
    void Print();

    /**
     * @brief Set the Card object
     * 
     * @param card dana karta
     */
    void SetCard(int card);

    /**
     * @brief opertor int dla klasy AndroidSoldier
     * 
     * @return int zwraca typ
     */
    operator int()const;

    /**
     * @brief operator std::string dla klasy AndroidSoldier
     * 
     * @return std::string zwraca informacje o zolnierzu
     */
    operator std::string()const;

    /**
     * @brief funkcja toString, zwracajaca informacje o zolnierzu
     * 
     * @return std::string 
     */
    std::string ToString()const;

    /**
     * @brief Get the Card object
     * 
     * @return int 
     */
    int getCard()const;

private:
    int _type;
    int _card;
};

/**
 * @brief funkcja porownujaca wartosci card u dwoch zolnierzy
 * 
 * @param p1 zolnierz 1
 * @param p2 zolnierz 2
 * @return int 1 - pierwszy, -1 drugi, default 0
 */
int Compare(const AndroidSoldier& p1, const AndroidSoldier& p2);

#endif