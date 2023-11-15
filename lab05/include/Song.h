#ifndef SONG_H
#define SONG_H

#include<string>
#include<iostream>

/**
 * @brief Klasa Song, zawierajaca informacje o pojedynczj piosence
 * 
 */
class Song{
public:
    /**
     * @brief Construct a new Song object - domyslny, niczego nie przyjmuje
     * ustala wartosci _x i _y jako 0
     */
    Song();
    /**
     * @brief Construct a new Song object uzywajac danej nazwy/tytulu
     * ustala _name = name, a _x oraz _y jako 0
     * 
     * @param name tytul piosenki
     */
    Song(std::string name);
    /**
     * @brief Construct a new Song object ustala
     * _name = name, _x = x, _y =y
     * 
     * @param name tytul piosenki
     * @param x czas trwania
     * @param y sprzedaz
     */
    Song(std::string name, double x, double y);
    /**
     * @brief Destroy the Song object
     * 
     */
    ~Song();

    /**
     * @brief Prezentacja piosenki
     * 
     * @return void - nic
     */
    void Presentation();
    /**
     * @brief Set the Name object - ustawia dana nazwe piosenki
     * 
     * @param name nowy tytul
     * @return void
     */
    void SetName(std::string name);
    /**
     * @brief ustala czas trwania piosenki
     * 
     * @param x czas trwania
     * @return void
     */
    void SetX(double x);
    /**
     * @brief ustala sprzedaz piosenki
     * 
     * @param y sprzedaz
     * @return void
     */
    void SetY(double y);

    //potrzebne do album.h
    /**
     * @brief Get the Name object
     * 
     * @return std::string name
     */
    std::string getName();
    /**
     * @brief zwaca czas trwania
     * 
     * @return double x
     */
    double getX();
    /**
     * @brief zwraca sprzedaz
     * 
     * @return double y
     */
    double getY();
private:
    std::string _name;
    double _x;
    double _y;
};

#endif