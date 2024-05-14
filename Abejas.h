/*
* Proyecto Invernadero (segunda parte)
* Frida Arcadia Luna
* A01711615
* 13 de mayo 2024
*/

/**
 * Clase Abejas (composición de clase Flores)
*/

#ifndef ABEJAS_H
#define ABEJAS_H
#include <string>


class Abejas {

    private:
    //Declara la variable de instancia
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

