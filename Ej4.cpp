/* Escribir un programa que pida al usuario una palabra o frase y la almacene en una Lista
separando letra por letra, luego pedirá al usuario una vocal que desee contar y, por último, se
debe imprimir por pantalla la lista y el número de veces que aparece la vocal en la palabra o
frase. Validar que la Lista no esté vacía y que la letra a contar que introduzca el usuario sea una
vocal
 */
#include <iostream>
#include "Lista/Lista.h"
#include <cctype>
using namespace std;
bool esVocal(char vocal)
{ vocal=tolower(vocal);
    return vocal == 'a' || vocal== 'e' || vocal == 'i' || vocal == 'o' || vocal == 'u';
}
int  buscarVocal(Lista<char>lista, char vocal)
{   int contador=0;
    for (int i=0;i<lista.getTamanio();i++)
    {
        if(lista.getDato(i) == vocal)
        {
            contador++;
        }
    }
    return contador;
}
int main()
{
    Lista<char> lista;
    string frase;
    char vocal;

  cout<<"ingrese una palabra o frase letra a letra "<<endl;
    getline(cin,frase);

  for (int i=0;i<frase.length();i++)
  {
      lista.insertarUltimo(frase[i]);

  }
  if(lista.esVacia())
  {
      cout<<"la lista esta vacia";
      return 0;
  }
   cout<<" Que vocal desea buscar " << endl;
    cin>>vocal;

   if(!esVocal(vocal))
   {
       cout<<"la letra tiene que ser una vocal";
   }
    cout<<"la vocal aparece en la frase: "<<  buscarVocal(lista,vocal)<< " veces";

}