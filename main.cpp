#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <vector>          // std::list
#include <set>          // std::list
#include <map>          // std::list
using namespace std;


//agrega el elemento valor (dado) a mi_set (dado).
void agregarASet(set<int> *mi_set,int valor)
{
    mi_set->insert(valor); // Colocamos el valor dentro del apuntador mi_set

}

//devuelve true si valor (dado) existe en mi_set (dado)
bool existe(set<int> mi_set,int valor)
{

    for(set<int>::iterator interador = mi_set.begin();
    interador!= mi_set.end(); interador++) // creamos un recorido para el iterator para recorrer mi_set
    {
        while(*interador == valor) // creamos una condicion para verificamos si el valor existe dentro del mi_set
        {
            return true; // return true si encontramos el valor
        }
    }
    return false; // si el valor no se encuentra el valor retorna false
}

//devuelve la cantidad de elementos de mi_set (dado)
int tamano(set<int> mi_set)
{
    return mi_set.size(); //retornamos el numero de elementos dentro del mi_set
}

//devuelve la interseccion de mi_set1 (dado) y mi_set2 (dado)
//(devuelve un set que contenga unicamente los valores que mi_set1 y mi_set2 tengan en comun)
set<int> getInserseccion(set<int> mi_set1, set<int> mi_set2)
{
    set<int> mi_set3; // variable donde se guardaran los valores
    for(set<int>:: iterator interador= mi_set1.begin();
    interador!= mi_set1.end(); interador++) // recorremos el primer set a traves de un iterator
    {
        for(set<int>:: iterator interador2= mi_set2.begin();
        interador2 != mi_set2.end(); interador2++) // reccorrer el segundo set de la misma manera que el primero
            {
            if(*interador == *interador2) // verificamos que el valor del primer set sea igual que el segundo (interseccion)
            {
                mi_set3.insert(*interador); // se inserta el valor que sea similiar a la interseccion
            }
        }
    }
    return mi_set3; // con return devolvemos los valores insertados en el set
}

//devuelve la union de mi_set1 (dado) y mi_set2 (dado)
//(devuelve un set que contenga todos los valores de mi_set1 y mi_set2)
set<int> getUnion(set<int> mi_set1, set<int> mi_set2)
{
    set<int> mi_set3; // con esta variable guardamos los valores dentro de mi_set
    for(set<int>:: iterator interador= mi_set1.begin();
    interador!= mi_set1.end(); interador++) // recorremos el primer set a traves de iterator
    {
        for(set<int>:: iterator interador2 = mi_set2.begin();
        interador2!= mi_set2.end(); interador2++) //recorrer el segundo de la misma manera
        {
            mi_set3.insert(*interador); // insertamos los valores del mi_set 1
            mi_set3.insert(*interador2); // insertamos los valores del mi_set 2
        }
    }
    return mi_set3;  // retorna los valores insertados
}

//devuelve true si mi_sub_set (dado) es un subconjunto de mi_set (dado)
//(mi_set contiene todos los valores de mi_sub_set)
bool esSubConjunto(set<int> mi_set, set<int> mi_sub_set)
{
    set<int> set3; // variable para guardar los puntos de interseccion

    for(set<int>::iterator interador = mi_set.begin();
    interador!= mi_set.end(); interador++) // creamos un ciclo para recorrer el mi_set principal dentro del interador
    {
        for(set<int>::iterator interador2 = mi_sub_set.begin();
        interador2!= mi_sub_set.end(); interador2++) // reccorer el segundo mi_set o el mi_set que tiene los sub conjunto
        {
            if(*interador==*interador2) // proceso para determinar intersecciones
            {
                set3.insert(*interador); // insertamos las intersecciones dentro de una variable

            }
        }
    }
    while(set3==mi_sub_set) // creamos una condicion si las interseccion es igual al valor de los subconjuntos
    {
        return true; // nos devuelve true si mi_sub_set es un subconjunto
    }

    return false; // devuelve false si en lo contrario
}

int main ()
{

    //Funcion evaluadora
    evaluar();
    return 1;
}
