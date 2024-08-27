/*
 Desarrolla un programa para gestionar un monitor publicitario que debe mostrar frases de
anuncios de manera circular. Para lograr esto, implementarás una solución utilizando una lista
circular simplemente enlazada.
Requisitos:
1. Frases de Anuncios:
○ Cada frase de anuncio será un texto simple que el monitor debe mostrar por
vez.
2. Mostrar Circularmente:
○ Las frases deben mostrarse en un formato circular, es decir, una vez que se ha
mostrado la última frase, el monitor debe volver a mostrar la primera y así
infinitamente.
3. Implementación:
○ Utiliza una lista circular simplemente enlazada para gestionar el almacenamiento
y la visualización de las frases. La lista circular debe permitir el recorrido
continuo de los elementos.
4. Operaciones Básicas:
○ Agregar Frases: Capacidad para añadir nuevas frases a la lista circular.
○ Eliminar Frases: Capacidad para eliminar frases específicas de la lista.
○ Mostrar Frases: Implementa una función para mostrar las frases en el monitor
de manera continua, recorriendo circularmente la lista e infinitamente.

 */
#include <iostream>
#include "Lista/CircList.h"
using namespace std;

void showCirc(CircList<string>lista1){
    if (lista1.esVacia()){
        cout << "No hay frases para mostrar " << endl;
        return;
    }
    int i=0;
    while (i>=0){
        for (int j = 0; j < lista1.getTamanio(); ++j) {
            cout << lista1.getDato(j) << " " << endl;
        }
        i++;
    }

}
int main(){
    CircList<string> lista1;
    int t;

    cout<<"ingrese el tamaño de la lista ";
    cin>>t;

    string frase;
    while(true){
        cout<<"ingrese la frase que desea mostrar o tipee NO si no quiere seguir cargando frases"<<endl;
        getline(cin,frase);
        if(frase == "NO"){
            break;
        }
        lista1.insertarUltimo(frase);

    }
    showCirc(lista1);

}
