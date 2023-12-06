#ifndef SOLDIER_H
#define SOLDIER_H

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
private:
    int _type;
    int _card;
};

#endif