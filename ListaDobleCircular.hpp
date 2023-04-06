#include "NodoTD.hpp"

template <typename T>
class ListaDobleCircular {
    NodoTD<T> * head;
    int tam;

public:
    ListaDobleCircular() {
        this -> head = nullptr;
        this -> tam = 0;
    }

    void agregarInicio(T valor) {
        if(this -> head) {
            NodoTD<T> * nuevo = new NodoTD<T>(valor, this->head, this->head->getAnterior());

            this->head->setAnterior(nuevo);
            this->head = nuevo;
        }
        else{
            NodoTD<T> * nuevo = new NodoTD<T>();
            nuevo->setDato(valor);
            nuevo->setSiguiente(nuevo);
            nuevo->setAnterior(nuevo); 
        }
    }
};