/*Crear un programa que pida al usuario dar elementos a una Lista de números enteros. Luego
cree una función que reciba una lista int L1 y devuelva otra lista int L2 conteniendo los elementos
repetidos de L1. Por ejemplo, si L1 almacena los valores 5->2->7-> 2->5->5->1, debe construirse
una lista L2 con los valores 5->2. Si en L1 no hay elementos repetidos se debe indicar al usuario
que no hay elementos repetidos en L1, de lo contrario imprimir ambas listas.*/
#include <iostream>
#include "Lista/Lista.h"
using namespace std;

void elemRepetidos(Lista<int>lista)
{   Lista<int>lista2;
    int digito=0;
    for (int i=0;i<=lista.getTamanio();i++)
    { digito=lista.getDato(i);
        if (digito == lista.getDato(i))
        {
            lista2.insertarUltimo(lista.getDato(i));
        }
    }
    cout<<"los elementos repetidos formaron la siguiente lista: ";
    lista2.print();

}
int main()
{   Lista<int> lista1;
    lista1.insertarUltimo(5);
    lista1.insertarUltimo(2);
    lista1.insertarUltimo(7);
    lista1.insertarUltimo(2);
    lista1.insertarUltimo(5);
    lista1.insertarUltimo(5);
    lista1.insertarUltimo(1);

    elemRepetidos(lista1);

}