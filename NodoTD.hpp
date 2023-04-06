/*
Author: Jose Angel Garcia Gomez
Date: 11/2021
Description: Class that implements a node for a Double Linked List
*/

#include <iostream>
using namespace std;

template <typename T>
class NodoTD{
    T dato;
    NodoTD * siguiente;
    NodoTD * anterior;
    public: 
    //Setters y Getters
    T getDato(){return this -> dato;}
    void setDato(T dato){this -> dato = dato;}
    NodoTD * getSiguiente(){return this -> siguiente;}
    void setSiguiente(NodoTD * siguiente){this -> siguiente = siguiente;}
    NodoTD * getAnterior(){return this -> anterior;}
    void setAnterior(NodoTD * anterior){this -> anterior = anterior;}

    NodoTD(){
        this -> dato = dato; 
        this -> siguiente = nullptr;
        this -> anterior = nullptr;
    }
    NodoTD(T dato, NodoTD * siguiente, NodoTD * anterior){
        this -> dato = dato;
        this -> siguiente = siguiente;
        this -> anterior = anterior;
    }
};