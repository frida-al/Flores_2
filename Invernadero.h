/*
* Proyecto Invernadero
* Frida Arcadia Luna
* A01711615
* 28 de mayo 2024
*/

/*
* En este archivo se encuentra la clase Invernadero, que facilita los getters 
* de nombre y edad de todas las plantas, sin importar la clase. Esto debido al polimorfismo.
*/
#ifndef INVERNADERO_H
#define INVERNADERO_H

#include "Planta.h"
#include <iostream>
#include <string>
#include <sstream>

//Declaración de clase Invernadero
class Invernadero{
    // Atributos privados
    private:
        Planta * planta[9]; // Arreglo tipo Planta
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
        void crea_ejemplos();
        void imprime_ejemplos();
    };

    /**
     * Función crea ejemplos
     * Crea tres objetos de cada una de las clases en la memoria dinámica para el correcto funcionamiento del polimorfismo
     * 
     * @param 
     * @return
     */
void Invernadero::crea_ejemplos(){
    if (cont < 9){
        planta[cont] = new Flores ("Peony", 1, "pink", 8.0);
        cont++;
        planta[cont] = new Flores ("Forget-me-not", 2, "blue", 4.0);
        cont++;
        planta[cont] = new Flores ("Carnation", 5, "white", 3.0 );
        cont++;
        planta[cont] = new Medicinales ("Calendula", 2, "Egypt", "Anti-inflamatory");
        cont++;
        planta[cont] = new Medicinales ("Rosemary", 1, "Mediterranean", "Antibacterial");
        cont++; 
        planta[cont] = new Medicinales ("Lemon balm", 1, "Central Asia", "Stress and anxiety");
        cont++;
        planta[cont] = new Fruit ("Pomegranate", 5, "Tree","September", 0);
        cont++;
        planta[cont] = new Fruit ("Tangerine", 6, "Tree","October-December", 0);
        cont++;
        planta[cont] = new Fruit ("Fig", 3, "Tree","August-October", 0);
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
#endif
