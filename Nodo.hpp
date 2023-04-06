#include <iostream>
using namespace std;

class Nodo{
    //Atributos
    int dato;
    Nodo * siguiente;
    public:
    //Metodos
    //Constructores
    Nodo(){
        this->dato = 0;
        this->siguiente = nullptr;
    }
    Nodo(int dato, Nodo * siguiente){
        this-> dato = dato;
        this-> siguiente = siguiente;
    }
    //Metodo destructor
    ~Nodo(){}
    //Getters y Setters
    void setDato(int dato){this->dato = dato;}
    void setSiguiente(Nodo* siguiente){this->siguiente = siguiente;}

    int getDato(){return this-> dato;}
    Nodo * getSiguiente(){return this-> siguiente;}
};