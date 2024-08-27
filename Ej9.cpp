/*
  Desarrolla un programa que simule el historial de páginas web visitadas en un navegador
utilizando una lista doblemente enlazada. El programa debe permitir al usuario retroceder y
avanzar entre las páginas visitadas, mostrando sus direcciones en pantalla.
 Requisitos:
1. Estructura de Datos:
○ Usa el concepto de una lista doblemente enlazada para mantener el historial de
páginas web visitadas.
○ Cada nodo de la lista debe almacenar la URL de la página web visitada.
2. Funciones del Programa:
○ Añadir Página: Permite agregar una nueva URL al final del historial de
navegación.
○ Mostrar Histórico: Muestra todas las URLs del historial desde la más antigua a la
más reciente.
○ Retroceder: Permite al usuario retroceder a la página web visitada
anteriormente, mostrando la URL en pantalla.
○ Avanzar: Permite al usuario avanzar a la siguiente página web en el historial,
mostrando la URL en pantalla.
3. Interfaz del Usuario:
○ La interfaz debe ser de línea de comandos y debe permitir al usuario ingresar
URLs y navegar a través del historial usando comandos simples.
○ Implementa un menú para que el usuario pueda elegir entre las opciones
disponibles: añadir una página, mostrar el historial, retroceder, avanzar, y salir
del programa.
 */

#include <iostream>
#include "Lista/ListaDoble.h"
using namespace std;

void aniadirPag(ListaDoble<string> &lista){
    string d;
        cin.ignore();
        cout<< "ingrese el url de la pagina que desea aniadir(si ya no desea añadir mas escriba NO " << endl;
        getline(cin,d);
        lista.insertarUltimo(d);
}
void mostrarPag(ListaDoble<string>& lista){
    for (int i = 0; i < lista.getTamanio(); ++i) {
        cout << lista.getDato(i) << "<->";
    }
}
void retrocederPag(ListaDoble<string>&lista,int posicion){
   cout << lista.getDato(posicion-2) << endl ;
}
int main(){
    int opcion = 0;
    ListaDoble<string> lista;
    int posicion = 0;
  while(opcion != 5){
    cout << "ingrese [1] para aniadir una pagina" << endl;
    cout << "ingrese [2] para mostrar el historial " << endl;
    cout << "ingrese [3] para retroceder a la pagina web visitada anteriormente" << endl;
    cout << "ingrese [4] para avanzar a la siguiente pagina web en el historial" << endl;
    cout << "ingrese [5] para salir del menu" << endl;
    cout << " |ingrese la opcion| " << endl;
    cin >> opcion;

    switch (opcion) {
        case 1:
            aniadirPag(lista);
            posicion += 1;
            break;
        case 2:
            mostrarPag(lista);
            posicion = lista.getTamanio();
            break;
        case 3:
            retrocederPag(lista,posicion);
            posicion-=1;
            break;
        case 4:
           // avanzarPag();
            break;
        case 0:
            cout << "saliendo del menu ";
            break;
        default:
            cout << "opcion invalida";

    }  }
}







