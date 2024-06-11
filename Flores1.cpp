/*
* Proyecto Invernadero
* Frida Arcadia Luna
* A01711615
* 11 de junio 2024
*/

/*
* Proyecto para Programación Orientada a Objetos
* Es un programa que proporciona información acerca de tres tipos de plantas 
* (flores, plantas medicinales y árboles frutales) y puede calcular la cantidad 
* de agua que necesitan las flores en cada estación del año (input del usuario) 
* y cuánto miden los árboles frutales de acuerdo a su edad (input del usuario).
* El usuario también puede agregar plantas.
*/

//Bibliotecas 
#include <iostream> //para imprimir
#include <string> //para usar strings
#include "Planta.h" // clases de mi proyecto
#include "Invernadero.h" // clase que implementa polimorfismo

//Función menú
void menu(){
    //Imprime las opciones que va a tener el programa
    std::cout << "\nMenu: " << std::endl;
    std::cout << "1) Get all" << std::endl;
    std::cout << "2) Flowers" <<std::endl;
    std::cout << "3) Medicinal plants" <<std::endl;
    std::cout << "4) Fruit plants" <<std::endl;
    std::cout << "5) Add" << std::endl;
    std::cout << "6) Exit" << std::endl;
}

//Función instrucciones
void instrucciones(){
    //Imprime las instrucciones del programa
    std::cout << "\nINSTRUCTIONS" << std::endl;
    std::cout << "All of the options of the menu must be selected by the number " << std::endl; 
    std:: cout << "of the option, except for the options that belong to number 5) Add, " << std::endl;
    std::cout << "where you must write down the imformation requested for each plant. " << std::endl;
}
int main(){
    int res, res1, res2, res3, res4, res5, years, edad, bees, temporada; //variables enteros
    std::string nombre, color, origen, uso, tipo, tiempo; // variables string
    bool continua = true; //variable para ciclar el programa
    float litros; // variable float
    Invernadero inverna; // Objeto tipo invernadero
    // Objetos clase 1:
    Flores flor1("Peony", 1, "pink", 8.0);
    Flores flor2("Forget-me-not", 2, "blue", 4.0);
    Flores flor3("Carnation", 5, "white", 3.0 );

    // Objetos clase 2:
    Medicinales med1("Calendula", 2, "Egypt", "Anti-inflamatory"); 
    Medicinales med2("Rosemary", 1, "Mediterranean", "Antibacterial");
    Medicinales med3("Lemon grass", 1, "Central Asia", "Stress and anxiety");

    //Objetos clase 3:
    Fruit frutal1("Pomegranate", 5, "Tree","September", 0); 
    Fruit frutal2("Tangerine", 6, "Tree","October-December", 0);
    Fruit frutal3("Fig", 3, "Tree","August-October", 0);

    //Apuntadores
    Planta * planta1 = new Flores(flor1);
    Planta * planta2 = new Flores(flor2);
    Planta * planta3 = new Flores(flor3);
    Planta * planta4 = new Medicinales(med1);
    Planta * planta5 = new Medicinales(med2);
    Planta * planta6 = new Medicinales(med3);
    Planta * planta7 = new Fruit(frutal1);
    Planta * planta8 = new Fruit(frutal2);
    Planta * planta9 = new Fruit(frutal3);

    inverna.agrega_ejemplos(planta1);
    inverna.agrega_ejemplos(planta2);
    inverna.agrega_ejemplos(planta3);
    inverna.agrega_ejemplos(planta4);
    inverna.agrega_ejemplos(planta5);
    inverna.agrega_ejemplos(planta6);
    inverna.agrega_ejemplos(planta7);
    inverna.agrega_ejemplos(planta8);
    inverna.agrega_ejemplos(planta9);

    //Impresión de instrucciones
    instrucciones();

    //Ciclo para que el sistema siga corriendo mientras no se elija la opción "Exit"
    while (continua == true)
    {    

        //Impresión del menu
        menu(); 
        // Guardar la opción seleccionada del menu
        std::cin >> res; 

        //Dependiendo del input, se realizan ciertas operaciones
        if (res == 1){ // Opción "Get all". Polimorfismo
            inverna.imprime_ejemplos();
            }
        else if (res == 2){ // Opción "Flowers"
            std::cout << "Flowers. What do you want to know?" << std::endl << "1) Irrigation" << std::endl << "2) Pollination" << std::endl;
            std::cin >> res1; 
            if (res1 == 1){ //Se solicita el input: "¿en qué estación del año quiere calcular?"
                std::cout << "Season: " << std::endl << "1) Spring" << std::endl << "2) Summer" << std::endl << "3) Autumn" << std::endl << "4) Winter" << std::endl; 
                std::cin >> temporada;
                flor1.riego(temporada);
                flor2.riego(temporada);
                flor3.riego(temporada);
                // Se imprime cuántos litros necesita cada flor según la estación del año
                std::cout << flor1.get_nombre() << " needs " << flor1.get_litros(temporada) << " liters per week" << std::endl;
                std::cout << flor2.get_nombre() << " needs " <<  flor2.get_litros(temporada) <<  " liters per week" << std::endl;
                std::cout << flor3.get_nombre() << " needs " << flor3.get_litros(temporada) <<  " liters per week" << std::endl;
            }
            else if (res1 == 2){ // Se solicita el input: "¿Ha habido contacto entre flores y abejas?"
                std::cout << "Were there bees with the flowers? " << std::endl << "1) Yes" << std::endl << "2) No" << std::endl;
                std::cin >> bees;
                flor1.set_abejas(bees);
                flor2.set_abejas(bees);
                flor3.set_abejas(bees);
                // Se imprime un string que confirma si sí se han polinizado las flores
                std::cout << flor1.get_nombre() << ": " << flor1.get_abejas().get_abejas() << std::endl;
                std::cout << flor2.get_nombre() << ": " << flor2.get_abejas().get_abejas() << std::endl;
                std::cout << flor3.get_nombre() << ": " << flor3.get_abejas().get_abejas() << std::endl;
            }
        }
        else if (res == 3){ //Opción "Medicinal plants"
            std::cout << "Medicinal plants. Do you feel bad?" << std::endl <<"1) Yes" << std::endl << "2) No" << std::endl;
            std::cin >> res2;
            if (res2 == 1){ // Imprime qué planta es adecauda para la sintomatología
                std::cout << "What happened?" << std::endl << "1) Blow" << std::endl << "2) Cut" << std::endl << "3) Stressed" << std::endl;
                std::cin >> res4;
                switch (res4)
                {
                case 1:
                    std::cout << "Make Calendula tea out of the flowers and apply to the inflamed area with a clean cloth" << std::endl;
                    break;
                
                case 2:
                    std::cout << "Use Rosemary oil for antiseptic effect" << std::endl;
                    break;

                case 3:
                    std::cout << "Mix some drops of lemongrass essential oil with coconut oil and massage into your skin."<< std::endl << "Suggestion: Do a patch test first.";
                    break;
                }
            }
            
        }  
        else if (res == 4){ // Opcion "Fruit trees"
            std::cout << std::endl << "1) Calculate Height" << std::endl;
            std::cin >> res3;
            if (res3 == 1){  //Se solicita el input: "¿cuál es la edad del árbol?"
                std::cout << "Age of the tree? "; 
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
        else if (res == 5){ // Opcion "Add, permite que el usuario agregue plantas de los tres tipos. Cada una solicita caracteristicas diferentes"
            std::cout << std::endl << "1) Add Flower" << std::endl << "2) Add Medicinal plant" << std::endl << "3) Add Fruit plant" << std::endl;
            std::cin >> res5;
            switch (res5){
            case 1:
                {std::cout << "Enter the name of the flower: ";
                std::cin >> nombre;
                std::cout << "Enter the age of the flower: ";
                std::cin >> edad;
                std::cout << "Enter the color of the flower: ";
                std::cin >> color;
                std::cout << "Enter how many liters it needs of water it needs in summer: ";
                std::cin >> litros;
                Planta * planta10 = new Flores(nombre, edad, color, litros);
                inverna.agrega_ejemplos(planta10);}
                break;
            case 2: 
                {std::cout << "Enter the name of the plant: ";
                std::cin >> nombre;
                std::cout << "Enter the age of the plant: ";
                std::cin >> edad;
                std::cout << "Enter the homeland of the plant: ";
                std::cin >> origen;
                std::cout << "Enter the use of the plant: ";
                std::cin >> uso;
                Planta * planta11 = new Medicinales(nombre, edad, origen, uso);
                inverna.agrega_ejemplos(planta11);}
                break;
            case 3:
                {std::cout << "Enter the name of the fruit plant: ";
                std::cin >> nombre;
                std::cout << "Enter the age of the fruit plant: ";
                std::cin >> edad;
                std::cout << "Enter the type of the fruit plant (if it is a tree or a plant): ";
                std::cin >> tipo;
                std::cout << "Enter the months when it bears fruit: ";
                std::cin >> tiempo;
                Planta * planta12 = new Fruit(nombre, edad, tipo, tiempo);
                inverna.agrega_ejemplos(planta12);}
                break;
            }
        }
        else if (res == 6){ //Opción "Exit"
            for(int i = 0; i < inverna.cont; i++){
                delete inverna.planta[i];
                }
            std::cout << "Good bye" << std::endl;
            continua = false;
        }
    }       
    
            return 0;
}           
