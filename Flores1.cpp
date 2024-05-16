/*
* Proyecto Invernadero (segunda parte)
* Frida Arcadia Luna
* A01711615
* 13 de mayo 2024
*/

/*
* Proyecto para Pensamiento Computacional Orientado a Objetos
*Es un programa que proporciona información acerca de tres tipos de plantas 
*(flores, plantas medicinales y árboles frutales) y puede calcular la cantidad 
*de agua que necesitan las flores en cada estación del año (input del usuario), si las flores han
*estado en contacto con abejas, mediante una clase de composición (input del usuario) y cuánto miden los 
*árboles frutales de acuerdo a su edad (input del usuario)
*/

//Bibliotecas 
#include <iostream> //para imprimir
#include <string> //para usar strings
#include "Planta.h" // clases de mi proyecto

//Función menú
void menu(){
    //Imprime las opciones que va a tener el programa
    std::cout << "\nMenu: " << std::endl;
    std::cout << "1) Flowers" << std::endl;
    std::cout << "2) Medicinal plants" <<std::endl;
    std::cout << "3) Fruit trees" <<std::endl;
    std::cout << "4) Exit" <<std::endl;
}

int main(){
    int res, res1, res2, res3, years; //variables enteros
    std::string temporada; //variable string
    bool continua = true; //variable para ciclar el programa
    std::string bees; // variable string

    // Objetos clase 1:
    Flores flor1("Peony", 1, "pink", 8.0);
    Flores flor2("Forget-me-not", 2, "blue", 4.0);
    Flores flor3("Carnation", 5, "white", 3.0 );

    // Objetos clase 2:
    Medicinales planta1("Calendula", 2, "Egypt", "Anti-inflamatory"); 
    Medicinales planta2("Rosemary", 1, "Mediterranean", "Antibacterial");
    Medicinales planta3("Lemon balm", 1, "Central Asia", "Stress and anxiety");

    //Objetos clase 3:
    Fruit frutal1("Pomegranate", 5, "Tree","September", 0); 
    Fruit frutal2("Tangerine", 6, "Tree","October-December", 0);
    Fruit frutal3("Fig", 3, "Tree","August-October", 0);

    //Ciclo para que el sistema siga corriendo mientras no se elija la opción "Exit"
    while (continua == true)
    {    

    //Impresión del menu
    menu(); 
    // Guardar la opción seleccionada del menu
    std::cin >> res; 

    //Dependiendo del input, se realizan ciertas operaciones
    if (res == 1){ // Opción "Flowers"
        std::cout << "Flowers. What do you want to know?" << std::endl << "1) Flower 1" << std::endl << "2) Flower 2"<< std::endl << "3) Flower 3" << std::endl << "4) Irrigation" << std::endl << "5) Pollination" << std::endl;
        std::cin >> res1; 
        if (res1 == 1){ //Se imprimen todos los atributos de la flor 1
            std::cout << "The flower 1 is " << flor1.get_color() << std::endl;
            std::cout << "The flower 1 is " << flor1.get_edad() << " years old" << std::endl;
            std::cout << "The flower 1 is " << flor1.get_nombre() << std::endl;     
        }
        else if (res1 == 2){ //Se imprimen todos los atributos de la flor 2
            std::cout << "The flower 2 is " << flor2.get_color() << std::endl;
            std::cout << "The flower 2 is " << flor2.get_edad() << " years old" << std::endl;
            std::cout << "The flower 2 is " << flor2.get_nombre() << std::endl; 
        }
        else if (res1 == 3){ //Se imprimen todos los atributos de la flor 3
            std::cout << "The flower 3 is " << flor3.get_color() << std::endl;
            std::cout << "The flower 3 is " << flor3.get_edad() << " years old" << std::endl;
            std::cout << "The flower 3 is " << flor3.get_nombre() << std::endl;
        }
        else if (res1 == 4){ //Se solicita el input: "¿en qué estación del año quiere calcular?"
            std::cout << "Season: "; 
            std::cin >> temporada;
            flor1.riego(temporada);
            flor2.riego(temporada);
            flor3.riego(temporada);
            // Se imprime cuántos litros necesita cada flor según la estación del año
            std::cout << "The flower 1 needs " << flor1.get_litros() << " liters per week" << std::endl;
            std::cout << "The flower 2 needs " << flor2.get_litros() <<  " liters per week" << std::endl;
            std::cout << "The flower 3 needs " << flor3.get_litros() <<  " liters per week" << std::endl;
        }
        else if (res1 == 5){ // Se solicita el input: "¿Ha habido contacto entre flores y abejas?"
            std::cout << "Were there bees with the flowers? Answer Yes or No ";
            std::cin >> bees;
            flor1.set_abejas(bees);
            flor2.set_abejas(bees);
            flor3.set_abejas(bees);
            // Se imprimen los valores true or false dependiendo el input
            std::cout << "Are they pollinated? 1 for yes (true), 0 for no (false)" << std::endl;
            std::cout << flor1.get_abejas().get_abejas() << std::endl;
            std::cout << flor2.get_abejas().get_abejas() << std::endl;
            std::cout << flor3.get_abejas().get_abejas() << std::endl;
        }
    }
    else if (res == 2){ //Opción "Medicinal plants"
        std::cout << "Medicinal plants. What do you want to know?" << std::endl <<"1) Plant 1" << std::endl << "2) Plant 2" << std::endl << "3) Plant 3" << std::endl;
        std::cin >> res2;
        if (res2 == 1){ // Se imprimen todos los atributos de la planta 1
            std::cout << "The plant is " << planta1.get_nombre() << std::endl;
            std::cout << "It is " << planta1.get_edad() << " year old" <<std::endl;
            std::cout << "It is from " << planta1.get_origen() << std::endl;
            std::cout << "It is " << planta1.get_uso() << std::endl;
        }
        else if (res2 == 2){ //Se imprimen todos los atributos de la planta 2
            std::cout << "The plant is " << planta2.get_nombre() << std::endl;
            std::cout << "It is " << planta1.get_edad() << " years old" <<std::endl;
            std::cout << "It is from " << planta2.get_origen() << std::endl;
            std::cout << "It helps with " << planta2.get_uso() << std::endl;
        }
        else if (res2 == 3){ //Se imprimen todos los atributos de la planta 3
            std::cout << "The plant is " << planta3.get_nombre() << std::endl;
            std::cout << "It is " << planta1.get_edad() << " year old" <<std::endl;
            std::cout << "It is from " << planta3.get_origen() << std::endl;
            std::cout << "It helps with " << planta3.get_uso() << std::endl;
        }
    }  
    else if (res == 3){ // Opcion "Fruit trees"
        std::cout << "Fruit trees. What do you want to know?" << std::endl <<"1) Fruit plant 1" << std::endl << "2) Fruit plant 2" << std::endl << "3) Fruit plant 3" << std::endl << "4) Height" << std::endl;
        std::cin >> res3;
        if (res3 == 1){ // Se imprimen todos los atributos del frutal 1
            std::cout << "The fruit is " << frutal1.get_nombre() << std::endl;
            std::cout << "It is a " << frutal1.get_type() << std::endl;
            std::cout << "It bears fruit on " << frutal1.get_time() << std::endl;
        }
        else if (res3 == 2){ //Se imprimen todos los atributos del frutal 2
            std::cout << "The fruit is " << frutal2.get_nombre() << std::endl;
            std::cout << "It is a " << frutal2.get_type() << std::endl;
            std::cout << "It bears fruit on " << frutal2.get_time() << std::endl;
        }
        else if (res3 == 3){ // Se imprimen todos los atributos del frutal 3
            std::cout << "The fruit is " << frutal3.get_nombre() << std::endl;
            std::cout << "It is a " << frutal3.get_type() << std::endl;
            std::cout << "It bears fruit on " << frutal3.get_time() << std::endl;
        }
        else if (res3 == 4){ //Se solicita el input: "¿cuál es la edad del árbol?"
            std::cout << "Age of the tree: "; 
            std::cin >> years;
            frutal1.height(20, years);
            frutal2.height(18, years);
            frutal3.height(12, years);
            // Se imprime la altura del árbol dependiendo de su edad
            std::cout << "The Pomegranate tree is " << frutal1.get_altura() << " inches tall" << std::endl;
            std::cout << "The Tangerine tree is " << frutal2.get_altura() << " inches tall" << std::endl;
            std::cout << "The Fig tree is " << frutal3.get_altura() << " inches tall" << std::endl;
        }
    } 
    else if (res == 4){ //Opción "Exit"
        std::cout << "Good bye";
        continua = false;
    }
    }
            return 0;
}            
