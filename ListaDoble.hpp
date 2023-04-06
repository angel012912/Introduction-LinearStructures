/*
Author: Jose Angel Garcia Gomez
Date: 11/2021
Description: Class that implements a double linked list
*/

#include "NodoTD.hpp"
#include <iostream>

using namespace std;

template <typename T>
class ListaDoble{
    //Atributos
    private:
        NodoTD<T> * head;
        int tam;

    public:

    void setNodo(NodoTD<T> * head){this->head = head;}
    void setTam(int tam){this->tam = tam;}
    
    NodoTD<T> * getNodo(){return this-> head;}
    int getTam(){return this-> tam;}

    ListaDoble(){
        this->head = nullptr;
        this->tam = 0;
    }

    void agregarInicio(T valor){
        //Crear nuevo nodo y actualizar referrencia
        NodoTD<T> * nuevo = new NodoTD<T>(valor,this->head, nullptr);
        //Actualizar el apuntador anterior del siguiente del head
        if(this -> head)//Si la lista tiene nodo se actualiza el apuntador del anterior al nuevo nodo
            this -> head -> setAnterior(nuevo);
        //Actualizar el head de la lista a l nuevo nodo
        this-> head = nuevo;
        //Actualizar tam
        this -> tam++;
    }

    void agregarFinal(T valor){
        if(this->head){
            //Lista  con valores
            //agregar el nuevo nodo
            NodoTD<T>*  ptr = this->head;
            
            while (ptr->getSiguiente()){
                ptr = ptr->getSiguiente();
            }
            
            NodoTD<T> * nuevo = new NodoTD<T>(valor,nullptr, ptr);
            ptr->setSiguiente(nuevo);
        }
        else {
            //Lista sin valores
            // head es igual a nuevo nodo 
            //Crear nuevo nodo y actualizar referrencia
            NodoTD<T> * nuevo = new NodoTD<T>(valor,this->head,this->head);
            //Actualizar el head de la lista a l nuevo nodo
            this-> head = nuevo;
        }
        //Actualizar el tam
        this->tam++;
    }

    void imprimirLista(){
            NodoTD<T> * nodo = this -> head;
            while(nodo){
                cout << nodo -> getDato() << " ";
                nodo = nodo -> getSiguiente();
            }
            cout << endl;
        }
};





