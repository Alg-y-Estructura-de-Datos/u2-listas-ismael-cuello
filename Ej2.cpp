/*Implementar una función que recibe una lista de números enteros y un número entero “n” y
que modifique la lista borrando todos los elementos de la lista que tengan el número “n”.
Imprimir la lista antes de hacer el llamado a la función y luego del llamado a la función para
mostrar que la lista original cambió. ej: lista: 1->2->3->4->5->3->7->8->3->10 con n=3 debe
pasar con la función a 1->2->4->5->7->8.*/
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
    cout << "ingrese el tamaño de la lista1: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cout << "ingrese el valor de la lista en la posicion: " << endl;
        cin >> d;
        lista1.insertarUltimo(d);
    }

    cout << "ingrese la posicion desde donde desea imprimir la lista1" << endl;
    cin >> p;

    printlista(lista1, p);
}