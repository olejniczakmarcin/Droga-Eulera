#ifndef VECTOR_H
#define VECTOR_H
template<class T>
class Vector
{
    T* tablica;  //tablica dowolnego typu
    int siz; //rozmiar wektora
public:
    Vector();
    void push_backk(T& v);
    T& operator[](int index);
    int size();
};
#endif // !VECTOR_H
