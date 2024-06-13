# Invernadero
Este proyecto es para la materia Programación Orientada a Objetos TC1030.304

## Contexto
Un invernadero quiere juntar información acerca de las plantas que maneja. Existen tres tipos de plantas, implementadas en clases diferentes. Estos tipos son: *flores, plantas medicinales y árboles frutales*. También registran la información de cuántos litros de agua necesita la clase flores dependiendo de la estación del año y si las flores han sido o no polinizadas. Esto último se logra usando la clase de composición *abejas*. Asimismo, se puede calcular cuántas pulgadas mide cada árbol frutal dependiendo de la edad del árbol y existe la opción de obtener una recomendación de una planta medicinal basado en sintomatología.

## Funcionalidad
El programa imprime un menú que le permite al usuario elegir qué información quiere obtener. Las opciones son: 
1. Imprimir los atributos de todas las plantas
2. Flores
3. Plantas medicinales
4. Árboles frutales
5. Agregar
6. Salir
La elección se realiza poniendo el número relacionado a la opción que se desea elegir. Una vez realizada la elección, se puede acceder a más información acerca de cada tipo de planta. Si el usuario escoge *flores* podrá calcular el riego y si las flores han estado en contacto con las abejas, en *árboles frutales*, se podrá calcular la altura de cada árbol dependiendo de la edad y en *plantas medicinales* se puede ofrecer un remedio con la planta de acuerdo con cierta sintomatología.
 
### Casos que harían que el proyecto deje de funcionar:
1) Cuando pide que se seleccione una opción del menú (que son solo números), si se escribe una palabra el programa se ciclará infinitamente.
2) Si se escoge un número que no está entre las opciones que se presentan, solo se ciclará el menú hasta que escoja una opción correcta.

## Consideraciones
El programa se encuentra en **inglés**, por lo que se le solicita al usuario que sus respuestas sean en el mismo idioma. Gracias.
El programa solo corre en la consola y esta hecho con c++ standard por lo que corre en todos los sistemas operativos
- compilar con: "g++ Flores.h Medicinales.h Fruit.h main.cpp"
- correr en linux: "/a.out"
- correr en windows: "a.exe"
  
## Correcciones
Versión 1.0: 13 de mayo de 2024. El programa cuenta inicialmente con 4 clases de plantas, de las cuales 3 heredan de la clase principal y la clase de composición *abejas*, además del main. *Subcompetencias*. Se identificaron las clases para el problema, al igual que los casos que harían que el proyecto deje de funcionar. Se generó el UML que plantea las clases del problema. Las clases se encuentran en el archivo **Planta.h**.

Versión 2.0: 21 de mayo de 2024. El archivo **Planta.h** se actualizó mediante la utilización de sobreescritura y sobrecarga. Es, además, el archivo que contiene la herencia. Se actualizó el UML con los métodos de la sobreescritura en las clases hijas. *Subcompetencias*. Se implementó herencia, modificadores de acceso y sobrecarga. Dentro del archivo **Planta.h** se encuentra la herencia, en las líneas de código **49 (para la primera clase que hereda)**, **222 (para la segunda)**, y **352 (para la última)**. Así mismo, los modificadores se encuntran en las líneas: **25-46 para la clase Planta**, **52-219 para la clase Flores**, **225-349 para la clase Medicinales** y **355-517 para la clase Fruit**. Por último, la sobrecarga se encuentra en: **ln 37 y 44 clase Planta**, **ln 65 y 72 clase Flores**, **ln 236 y 243 clase Medicinales** y **ln 367, 374 y 381 clase Fruit**.

Versión 3.0: 28 de mayo de 2024. Las modificaciones de esta versión fueron para implementar polimorfismo. En primer lugar, los métodos get_nombre y get_edad se modificaron a virtual. En segundo lugar, se creo una clase llama **Invernadero.h** donde se creó un arreglo tipo Planta para implementar el polimorfismo. En tercer lugar, se creó una nueva opción en el menú, que es "All names and ages" para mandar a llamar los métodos get_nombre y get_edad de todas las plantas (polimorfismo). Por último, se actualizó el UML. 

Versión 4.0: 31 de mayo de 2024. Se rehizo la sobreescritura para que funcionara el polimorfismo, que imprime todos los atributos de las plantas. Este se implementó mediante agregación. Se actualizó el UML. *Subcompetencias*. Se implementó de manera correcta la sobreescritura de métodos y el polimorfismo. La sobreescritura se encuntra en las **líneas 46,85,95, 253, 262, 394 y 403** del archivo **Planta.h**. El polimorfismo se encuntre en la línea **46 de Planta.h**, toda la clase **Invernadero.h** y en las opciones 1 y 6 del menú de **Flores1.cpp**.

Versión 5.0: 03 de junio de 2024. Se actualizó el menú para agregar la opción de las *plantas medicinales*. La clase **Planta** se estableció como clase abstracta. *Subcompetencias*.  Se implementó una clase abstracta. La clase abstracta se encuentra en la **línea 46 de Planta.h**.

Versión 6.0: 06 de junio de 2024. Se creó una nueva opción en el menú que le permite al usuario agregar plantas. Se agregó la función delete para desalojar la memoria dinámica de los apuntadores. Los atributos privados de la clase **Invernadero** se hicieron públicos para que puedan utilizarse desde el main con la función delete. Se actualizó el UML. 

Versión 7.0: 11 de junio de 2024. Se actualizó el menú para que cada opción se seleccione solo mediante números. Se hicieron los cambios correspondientes. Se agregaron instrucciones. *Subcompetencias*. Durante el desarrollo del proyecto, se ha sobreescrito en los archivos de Github para crear un historial. Se incluye toda la documentación necesaria en este espacio.
