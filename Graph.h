#ifndef GRAF_H
#define GRAF_H
#include "Verticles.h"
#include "Vector.h"

class graf
{
    Vector<wierzcholek*> wierzcholki;     // wektor wierzcholkow
public:
    graf();
    void dodaj_wierzcholek();
    void dodaj_krawedz(int poczatek, int koniec);
    void usun_krawedz(wierzcholek* poczatek, wierzcholek* koniec);
    void Euler2(wierzcholek* w, lista<int>& sciezka);
    void droga_Eulera(lista<int>& sciezka);
};
#endif
