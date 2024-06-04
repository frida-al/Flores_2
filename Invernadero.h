/*
* Proyecto Invernadero
* Frida Arcadia Luna
* A01711615
* 03 de junio 2024
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
    // Declaro las variables privadas de instancia
    private:
        Planta * planta[9]; // Apuntador tipo Planta para usar polimorfismo
        int cont;

    // Atributos públicos     
    public:
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
    * Función crea ejemplos
    * Crea tres objetos de cada una de las clases en la memoria dinámica para el correcto funcionamiento del polimorfismo
    * 
    * @param 
    * @return
    */
void Invernadero::agrega_ejemplos(Planta * objeto){
    if (cont < 9){
        planta[cont] = objeto;
        cont++;
    }
}
    /**
    * Función imprime ejemplos
    * Se encarga de imprimir los getters de nombre y edad
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
