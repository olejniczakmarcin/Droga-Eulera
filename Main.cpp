#include <iostream>
#include "Graph.h"
#include "List.h"

int main()
{
    graf g;
    g.dodaj_wierzcholek();
    g.dodaj_wierzcholek();
    g.dodaj_wierzcholek();
    g.dodaj_wierzcholek();
    g.dodaj_wierzcholek();
    g.dodaj_wierzcholek();
    g.dodaj_wierzcholek();
    g.dodaj_krawedz(0, 1);
    g.dodaj_krawedz(1, 2);
    g.dodaj_krawedz(2, 3);
    g.dodaj_krawedz(3, 0);
    g.dodaj_krawedz(3, 4);
    g.dodaj_krawedz(4, 5);
    g.dodaj_krawedz(5, 6);
    g.dodaj_krawedz(6, 3);
    lista<int> sciezka;
    g.droga_Eulera(sciezka);
    for (node<int>* aktualny = sciezka.get_first(); aktualny; aktualny = aktualny->get_next())
    {
        std::cout << aktualny->get_val() << " - ";
    }
    return 0;
}