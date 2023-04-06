#include <iostream>
using namespace std;

template <typename T>
class NodoT(){
    T dato;
    NodoT<T> * siguiente;
    public: 
        T getDato(){return this->dato;}
        void setDato(T dato){this->dato = dato;}
        Nodo * getSiguiente(){return this->siguiente;}
        void setSiguiente(NodoT * siguiente){this->siguiente = siguiente;}

        NodoT(T dato, NodoT * siguiente){
            this->dato = dato;
            this->siguiente = siguiente;
        }
};