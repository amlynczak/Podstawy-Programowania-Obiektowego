#ifndef ICEMACHINE_H
#define ICEMACHINE_H

#include<iostream>

/**
 * @brief klasa IceMachine reprezentujaca maszyne do robienia lodow
 * 
 */
class IceMachine{
public:
    /**
     * @brief funkcja ustala wartosc _id 
     * 
     * @param id nowa wartosc dla _id
     * @return funkcja nic nie zwraca
     */
    void SetID(int id);

    /**
     * @brief Set the State object - maszyna wlaczona/wylaczona
     * state == true - maszyna jest wlaczona, false - wylaczona
     * 
     * @param state nowy status maszyny
     * @return funkcja nic nie zwraca
     */
    void SetState(bool state);

    /**
     * @brief Set the Capacity object - pojemnosc proszku w maszynie
     * 
     * @param capacity ustalona pojemnosc
     * @return funkcja nic nie zwraca
     */
    void SetCapacity(double capacity);

    /**
     * @brief Set the Consumption object - zuzycie proszku/sztuke
     * 
     * @param consumption ustalone zuzycie
     * @return funkcja nic nie zwraca
     */
    void SetConsumption(double consumption);

    /**
     * @brief Set the Powder object - ilosc proszku w maszynie
     * 
     * @param powder ustalona ilosc proszku
     * @return funkcja nic nie zwraca
     */
    void SetPowder(double powder);

    /**
     * @brief wyswietlenie informacji o maszynie na ekranie
     * 
     */
    void Presentation();

    /**
     * @brief funkcja do robienia okreslonej ilosci lodow
     * 
     * @param count ilosc lodow, ktora chemy zrobic
     * @return funkcja nic nie zwraca
     */
    void Make(double count);

    /**
     * @brief funkcja do wlaczenia maszyny
     * 
     */
    void Start();

    /**
     * @brief funkcja uzupelnia proszek w maszynie
     * 
     * @param quantity ilosc proszku, ktora chemy dosypac
     * @return funkcja nic nie zwraca
     */
    void Reload(double quantity);

    /**
     * @brief funkcja zatrzymujaca maszyne
     * 
     */
    void Stop();

    //metody potrzebne do serwisu

    /**
     * @brief uzupelnienie proszku do maksymalnej mozliwej ilosci
     * 
     */
    void ReloadMax();
    /**
     * @brief zatrzymanie maszyny na potrzeby serwisu
     * 
     */
    void serviceStop();
private:
    int _id;
    bool _state;
    double _capacity;
    double _consumption;
    double _powder;
};

#endif