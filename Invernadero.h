/*
* Proyecto Invernadero
* Frida Arcadia Luna
* A01711615
* 06 de junio 2024
*/

/*
* En este archivo se encuentra la clase Invernadero, que imprime todos los atributos
* de todas las clases. Esto debido al polimorfismo.
*/
#ifndef INVERNADERO_H
#define INVERNADERO_H

#include "Planta.h"
#include <iostream>
#include <string>
#include <sstream>

//Declaración de clase Invernadero
class Invernadero{
           
    // Atributos públicos     
    public:
        Planta * planta[200]; // Apuntador tipo Planta para usar polimorfismo
        int cont;

        /**
         *  Constructor por default 
         * 
         * @param
         * @return Objeto Invernadero
         */
        Invernadero(): cont(0){};
        //Métodos miembro de la clase
        void agrega_ejemplos(Planta *);
        void imprime_ejemplos();
};

    /**
    * Función agrega ejemplos
    * Agrega objetos de cada una de las clases en la memoria dinámica para el correcto funcionamiento del polimorfismo
    * 
    * @param Apuntador tipo planta
    * @return
    */
void Invernadero::agrega_ejemplos(Planta * objeto){
    if (cont < 200){
        planta[cont] = objeto;
        cont++;
    }
}
    /**
    * Función imprime ejemplos
    * Se encarga de imprimir los atributos de todas las plantas
    * 
    * @param 
    * @return
    */
void Invernadero::imprime_ejemplos(){
    for(int i = 0; i < cont; i++){
        planta[i]->imprime_atributos();
    }
}
#endif // INVERNADERO_H
