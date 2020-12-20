#ifndef LISTA_H
#define LISTA_H
#include "Node.h"

template<class T>
class lista
{
    node<T>* first;
    node<T>* last;
    int siz; //rozmiar listy
public:
    lista();
    node<T>* get_first();
    void push_backk(T& v);
    int size();
    void usun(node<T>* n);
};
#endif