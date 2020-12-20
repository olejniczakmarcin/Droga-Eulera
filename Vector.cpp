#include "Vector.h"

template<class T> Vector<T>::Vector() :tablica(nullptr), siz(0) {}

template<class T> void Vector<T>::push_backk(T& v) // metoda dodajaca na koniec wektora
{
    T* nowa_tablica = new T[siz + 1]; //o jeden wiecej element
    if (tablica)
    {
        for (int i = 0; i < siz; i++)
            nowa_tablica[i] = tablica[i];
        delete[] tablica;
        tablica = nullptr;
    }
    nowa_tablica[siz] = v;
    tablica = nowa_tablica;
    siz++;
}
template<class T> T& Vector<T>::operator[](int index)    //przeciazony operator [ ] dla klasy wektor potrzebny do odwolywania sie do obiektu o indexie
{
    return tablica[index];
}
template<class T> int Vector<T>::size()  //metoda zwracajaca rozmiar
{
    return siz;
}