/*
Author: Jose Angel Garcia Gomez
Date: 11/2021
Description: Class that implements a simple linked list
*/

#include "Nodo.hpp"
using namespace std;

class ListaSimple{
    //Atributos
    Nodo * head;
    int tam;
    public:
        //Metodos
        //Constructores
        ListaSimple(){
            this->head = nullptr;
            this->tam=0;
        }
        
        //Getters y Setters
        void setHead(Nodo * head){this-> head = head;}
        void setTam(int tam){this->tam = tam;}

        Nodo * getHead(){return this-> head;}
        int getTam(){return this-> tam;}
        
        //CRUD O ABCC -> Create Read Update Delete
        void agregarInicio(int valor){
            //Crear nuevo nodo y actualizar la referencia
            Nodo * nuevo = new Nodo(valor, this->head); 
            //Actualizar el head de la lista al nuevo Nodo
            this->head = nuevo;
            //Actualizar el tamaño
            this->tam++;

        }
        void agregarFinal(int valor){
            //Crear el nuevo nodo
            Nodo * nuevo = new Nodo(valor, nullptr);
            //Verificar que caso es / Si la lista está vacía o tiene valores
            if(this->head){
                Nodo * nodo = this -> head;
                //Llegar al final de la lista
                while(nodo->getSiguiente())
                    {
                        nodo = nodo ->getSiguiente();
                    }
                nodo->setSiguiente(nuevo);
                //Agregamos el nuevo nodo
            }else{//lista esta vacia
                //El head es igual al nuevo nodo
                this->head = nuevo; 
            }
            this->tam++;
            //Actualizar el tamaño.
        }

        void imprimirLista(){
            Nodo * nodo = this->head;
            while(nodo){
                cout<<nodo->getDato()<<" ";
                nodo = nodo->getSiguiente();
            }
            cout<<endl;
        }

        Nodo * buscarNodo(int dato){
            Nodo * nodo = this->head;
            while(nodo){
                //Busqueda del valor dentro de los nodos de la lista
                if (nodo->getDato() == dato ){
                    return nodo;
                }
                nodo = nodo->getSiguiente();
            }
            return nullptr;
        }

};