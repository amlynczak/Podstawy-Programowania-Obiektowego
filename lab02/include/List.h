#ifndef LIST_H
#define LIST_H


// Element listy
struct slistEl
{
  slistEl * next;
  char data;
};

// Lista
struct slist
{
  slistEl * head;
};

/**
 * @brief inicjalizuje liste
 * 
 * Funkcja ustawia poczatek listy wpisujac null jako head.
 * 
 * @param list wskaznik do listy, ktora chcemy zainicjalizowac
 * @return funkcja nic nie zwraca
 */
void init(slist * list);

/**
 * @brief dodawanie elementu nakoniec listy
 * 
 * Funkcja przeszukuje liste, aby znalezc jej koniec, a nastepnie dodaje element na koniec (element ostatni wskazuje na element dodany).
 * Gdy lista nie posiada jeszcze żadnych elementów, ustala dodawany element jako head
 * 
 * @param list wskaznik do listy
 * @param c wartosc elementu ktory dodajemy na koniec
 * @return funkcja nic nie zwraca
 */
void push_back(slist * list, char c);

/**
 * @brief usuwanie elementu ktory jest wskazywany jako next
 * 
 * Funkcja usuwa element, ktory dany nam element wskazuje jako next (najpierw sprawdza, czy parametr istnieje i czy nie wskazuje na nullptr)
 * 
 * @param e wskaznik do elementu, ktorego next mamy usunac
 * @return funkcja nic nie zwraca
 */
void delete_after(slistEl * e);

/** @brief Wyszukanie elementu w liscie.
*
* Funkcja przeszukuje liste w celu znalezienia podanego elementu.
*
* @param[in] list  wskaznik do listy
* @param[in] c  wartosc szukanego elementu 
* @return wskaznik do pierwszego elementu listy o wartosci c jesli taki element jest w liscie \n
* NULL jesli lista nie posiada elementu o wartosci c
*/
slistEl * find(slist * list, char c);

/**
 * @brief wypisanie listy na ekranie
 * 
 * Funkcja otrzymuje wskaznik do listy, a nastepnie przechodzi po kazdym elemencie i wypisuje ich wartosci
 * 
 * @param list wskaznik do listy
 * @return funkcja nic nie zwraca
 */
void printl(slist * list);

#endif
