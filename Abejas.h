/*
* Proyecto Invernadero
* Frida Arcadia Luna
* A01711615
* 06 de junio 2024
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
        int abejas; 
        std::string si = "The flower has been pollinated";
        std:: string no = "The flower has not been pollinated";

    public:
     /**
     *  Constructor por default 
     * 
     * @param
     * @return Objeto Planta
     */
        Abejas(): abejas(0){}; 
    /**
     *  Constructor 
     * 
     * @param nom, ed
     * @return Objeto Planta
     */
        Abejas(int abe): abejas(abe){}; // Constructor
        // Métodos miembros de la clase
        void set_abejas(int);
        std::string get_abejas();
};
/**
 * setter de variable abejas
 * Asigna a la variable un string 
 * 
 * @param abe
 * @return
 */
 void Abejas::set_abejas(int abe){ //setter de 
    abejas = abe;
}
 /**
 * getter de variable abejas
 * regresa un string que confirma si las plantas han sido polinizadas o no
 * 
 * @param
 * @return std::string
*/
std::string Abejas::get_abejas(){
    if (abejas == 1){
        return si;
    }
    else if (abejas == 2){
        return no;
    }
    return no;
} 
#endif //ABEJAS_H
