# Invernadero
Este proyecto es para la materia Programación Orientada a Objetos TC1030.304

## Contexto
Un invernadero quiere juntar información acerca de las plantas que maneja. Existen tres tipos de plantas, implementadas en clases diferentes. Estos tipos son: *flores, plantas medicinales y árboles frutales*. También registran la información de cuántos litros de agua necesita la clase flores dependiendo de la esatción del año y si las flores han sido o no polinizadas. Esto último se logra usando la clase de composición *abejas*. Asimismo, se puede calcular cuántas pulgadas mide cada árbol frutal dependiendo de la edad del árbol.

## Funcionalidad
El programa imprime un menú que le permite al usuario elegir qué información quiere obtener. Las opciones son 
1. Flores
2. Plantas medicinales
3. Árboles frutales
Una vez realizada la elección, se puede acceder a más información acerca de cada tipo de planta. Si el usuario escoge *flores* podrá calcular el riego y si las flores han estado en contacto con las abejas o *árboles frutales*, se podrá calcular la altura.
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
Versión 1.0: 13 de mayo de 2024. El programa cuenta inicialmente con 4 clases de plantas, de las cuales 3 heredan de la clase principal y la clase de composición *abejas*, además del main. 

Versión 2.0: 21 de mayo de 2024. El archivo **Planta.h** se actualizó mediante la utilización de sobreescritura y sobrecarga. Es, además, el archivo que contiene la herencia. Se actualizó el UML con los métodos de la sobreescritura en las clases hijas.
