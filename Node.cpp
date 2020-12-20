#include "Node.h"

template<class T> node<T>* node<T>::get_next()  //metoda dostepu do next zwracajaca go
{
    return next;
}
template<class T> T& node<T>::get_val()    //metoda zwracajaca wartosc dowolnego typu
{
    return val;
}
template<class T> node<T>::node(T& v) :val(v), next(nullptr), privius(nullptr) {}