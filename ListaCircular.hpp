#include "NodoT.hpp"

template<typename T>
class ListaCircular{
    NodoT<T> * last;
    int tam;
    public:
        //setters y getters
    ListaCircular(){
        this->last = nullptr;
        this->tam = 0;
    }
    void agregarInicio(T dato){
        if(this->last){//Lista circular tienen nodos
            NodoT<T> * nuevo =new NodoT<T>(dato, this->last->getSiguiente());
            //Actualizar el apuntador de last y conectarlo al nuevo nodo
            this->last->setSiguiente(nuevo);
        }else{ //Lista vacia
            NodoT<T> * nuevo = new NodoT<T>(dato, nullptr);
            nuevo->setSiguiente(nuevo);
            this->last = nuevo;
        }
        this->tam++;
    }

    void agregarFin(T dato){
        if(this->last){ //Lista con elementos
            //Lo mismo solo que cambia el valor de last 
        }
    }
};