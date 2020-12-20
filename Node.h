#ifndef NODE_H
#define NODE_H
template<class T>
class node
{
public:
    node<T>* next;
    node<T>* privius;
    T val;
    node<T>* get_next();
    T& get_val();
    node(T& v);
};
#endif
