#ifndef ALBUM_H
#define ALBUM_H

#include"Song.h"

/**
 * @brief klasa album zawierajace piosenki i tytul albumu
 * 
 */
class Album{
public:
    /**
     * @brief Construct a new Album object - domyslny
     * 
     */
    Album();
    /**
     * @brief Construct a new Album object using name
     * 
     * @param albumName tytul albumu
     */
    Album(std::string albumName);
    /**
     * @brief Construct a new Album object dla trzech piosenek
     * 
     * @param albumName tytul
     * @param s1 piosenka 1
     * @param s2 piosenka 2
     * @param s3 piosenka 3
     */
    Album(std::string albumName, Song s1, Song s2, Song s3);
    /**
     * @brief Construct a new Album object dla 4 utworow
     * 
     * @param albumName tutyl
     * @param s1 piosenka 1
     * @param s2 piosenka 2
     * @param s3 piosenka 3
     * @param s4 piosenka 4
     */
    Album(std::string albumName, Song s1, Song s2, Song s3, Song s4);
    /**
     * @brief Construct a new Album object dla tablicy utworow
     * 
     * @param albumName tytul
     * @param size ilosc utworow
     * @param songs utwory
     */
    Album(std::string albumName, int size, Song* songs);
    /**
     * @brief Destroy the Album object
     * 
     */
    ~Album();

    /**
     * @brief prezentuje caly album
     * 
     * @return void
     */
    void Presentation();
    /**
     * @brief Set the Name object
     * 
     * @param albumName ustala tytul
     * @return void
     */
    void SetName(std::string albumName);
    /**
     * @brief Get the Songs object zwraca tablice piosenek trzymanych w tablicy
     * 
     * @return Song* 
     */
    Song* GetSongs();
    /**
     * @brief set new songs
     *
     * @param size number of new songs
     * @param songs array with songs
     * @return void
    */
    void SetNewSongs(int size, Song* songs);
    /**
     * @brief set a new song in one of places in array
     * 
     * @param num miejsce w tablicy
     * @param name tytul piosenki
     * @param x dlugosc piosenki
     * @param y sprzedaz
     * @return void
    */
    void SetSong(int num, std::string name, double x, double y);
private:
    std::string _albumName;
    int _size;
    Song* _songsTab;
};

#endif 