#include "listaSimple.hpp"

int main(){
    ListaSimple * lista = new ListaSimple(); //Creo lista en el heap con head = nullptr y tam = 0
    lista -> agregarInicio(3);
    lista -> agregarInicio(10);
    lista -> agregarInicio(319);
    lista -> imprimirLista();

    lista->agregarFinal(6);
    lista->imprimirLista();



    ListaSimple listaStack; //Crea lista en el stack con head = nullptr y tam = 0
    listaStack.agregarInicio(4);
    listaStack.agregarInicio(3);
    listaStack.imprimirLista();

    cout<<"Valor encontrado: "<<listaStack.buscarNodo(3)->getDato()<<" "<<listaStack.buscarNodo(3)<<endl;


    return 0;
}