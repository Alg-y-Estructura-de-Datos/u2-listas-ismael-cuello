#include <iostream>

using namespace std;

#include "lista/lista.h"

void printlista(Lista<int> &lista, int p) {
    int tamanio = lista.getTamanio();
    if (p >= tamanio || p < 0) {
        cout << "La posicion " << p << "esta fuera de los limites de la lista " << endl;
        return;
    }
    for (int i = p; i < tamanio; ++i) {
        cout << lista.getDato(i) << "->";
    }
    cout << "NULL" << endl;

}

int main() {
    Lista<int> lista1;
    int n, d, p;
    cout<<"ingrese el tamaño de la lista1: ";
    cin>>n;

    for (int i = 0; i < n; ++i) {
        cout<<"ingrese el valor de la lista en la posicion: "<<endl;
        cin>>d;
        lista1.insertarUltimo(d);
    }

    cout<<"ingrese la posicion desde donde desea imprimir la lista1" <<endl;
    cin>>p;

    printlista(lista1,p);


}
