/*
Author: Jose Angel Garcia Gomez
Date: 11/2021
Description: Program that makes use of the class ListaDoble
*/

#include "ListaDoble.hpp"

int main(){
    ListaDoble <int> * lista = new ListaDoble<int>();

    lista -> agregarInicio(3);
    lista -> agregarInicio(5);
    lista -> agregarInicio(7);
    lista -> imprimirLista();

    //Agregar final
    lista -> agregarFinal(21);
    lista -> agregarFinal(12);
    lista -> imprimirLista();
    return 0;
}