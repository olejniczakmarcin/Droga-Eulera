#include "Graph.h"
#include "Vector.cpp"

graf::graf() {}
void graf::dodaj_wierzcholek()    //dodajemy nowe wierzcholki
{
    wierzcholek* nowy = new wierzcholek;
    nowy->m_index = wierzcholki.size();
    wierzcholki.push_backk(nowy);
}
void graf::dodaj_krawedz(int poczatek, int koniec) //tworzymy polaczenia miedzy wierzcholkami
{
    wierzcholki[poczatek]->sasiedzi.push_backk(wierzcholki[koniec]);
    // pamietamy ze wierzcholki sa swoimi sasiadami ,najpierw dodajemy koniec do sasiadow poczatku
    wierzcholki[koniec]->sasiedzi.push_backk(wierzcholki[poczatek]);
    // dodajemy poczatek do sasiadow konca
}
void graf::usun_krawedz(wierzcholek* poczatek, wierzcholek* koniec)
{
    for (node<wierzcholek*>* aktualny = poczatek->sasiedzi.get_first(); aktualny; aktualny = aktualny->get_next())
    {//wezel o wartosci typu wierzcholek * dzialamy na orginale
        if (aktualny->get_val() == koniec)
        {
            poczatek->sasiedzi.usun(aktualny); //usuwamy sasiada koniec z listy sasiadow wierzcholka poczatek
            break;
        }
    }
    for (node<wierzcholek*>* aktualny = koniec->sasiedzi.get_first(); aktualny; aktualny = aktualny->get_next())
    {
        if (aktualny->get_val() == poczatek)
        {
            koniec->sasiedzi.usun(aktualny); //usuwamy sasiada poczatek z listy sasiadow wierzcholka koniec
            break;
        }
    }
}
void graf::Euler2(wierzcholek* w, lista<int>& sciezka)
{
    while (w->sasiedzi.size() > 0) //dopoki istnieje sasiad wykonuj
    {
        wierzcholek* v = w->sasiedzi.get_first()->get_val();    // pobieramy 1 sasiada
        usun_krawedz(w, v); //rekurencyjne usuwanie krawedzi
        Euler2(v, sciezka);  // rekurencyjne odwiedzanie sasiadow
    }
    sciezka.push_backk(w->m_index); //dodajemy numer wierzcholka na koniec listy
}
void graf::droga_Eulera(lista<int>& sciezka)
{
    Euler2(wierzcholki[0], sciezka);    //wywoluje z zerowym wierzcholkiem jako poczatek
}