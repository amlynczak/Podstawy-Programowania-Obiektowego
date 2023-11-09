#ifndef ARRAY_H
#define ARRAY_H

/**
 * @brief funkcja alokuje tablice o danym rozmiarze
 * 
 * @param size rozmiar tablicy, jaki chcemy zaalokowac
 * @return int* zwracamy wskaznik do nowozaalokowanej tablicy
 */
int* InitArray(int size);

/**
 * @brief funkcja przypisuje odpowiednie wartosci do tablicy
 * 
 * Funkcja przypisuje kolejne liczby z szeregu
 * 
 * @param arr wskaznik do tablicy, w ktorej inicjalizujemy wartosci
 * @param size rozmiar przekazywanej tablicy
 * @return void - nic nie zwraca
 */
void CreateSequence(int* arr, int size);

/**
 * @brief zmienia rozmiar tablicy
 * 
 * Funkcja zmienia rozmiar tablicy zostawiajac w niej powstale juz wartosci
 * 
 * @param arr wskaznik do tablicy, ktorej rozmiar chcemy zmienic
 * @param size rozmiar przekazywanej tablicy
 * @param newSize nowy rozmiar do tablicy
 * @return int* wskaznik do tablicy o nowym rozmiarze
 */
int* ChangeArraySize(int *arr, int size, int newSize);

/**
 * @brief usuwanie tablicy 
 * 
 * @param arr tablica, ktora chcemy usunac
 * @return void - nic nie zwraca
 */
void DeleteArray(int *arr);

#endif