/*
* Proyecto Invernadero 
* Frida Arcadia Luna
* A01711615
* 03 de junio 2024
*/

/**
 * Clase Abejas (composición de clase Flores)
*/

#ifndef ABEJAS_H
#define ABEJAS_H
#include <string>


class Abejas {

    //Declara la variable privada de instancia
    private:
        std::string abejas; 

    public:
     /**
     *  Constructor por default 
     * 
     * @param
     * @return Objeto Planta
     */
        Abejas(): abejas(""){}; 
    /**
     *  Constructor 
     * 
     * @param nom, ed
     * @return Objeto Planta
     */
        Abejas(std::string abe): abejas(abe){}; // Constructor
        // Métodos miembros de la clase
        void set_abejas(std::string);
        bool get_abejas();
};
/**
 * setter de variable abejas
 * Asigna a la variable un string 
 * 
 * @param abe
 * @return
 */
 void Abejas::set_abejas(std::string abe){ //setter de 
    abejas = abe;
}
 /**
 * getter de variable abejas
 * regresa verdadero o falso
 * 
 * @param
 * @return booleano
*/
bool Abejas::get_abejas(){
    if (abejas == "Yes"){
        return true;
    }
    else if (abejas == "No"){
        return false;
    }
    return false;
} 
#endif //ABEJAS_H

