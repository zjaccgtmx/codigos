#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 int main (){

     /*char *msj;
     msj = (char *) malloc(13);
     strcpy(msj, "Hola Mundo.-");
     puts(msj);*/

     //segundo bloque de código

     char *nombre;
     nombre = (char *) malloc(10);
     printf("¿Cómo te llamas?\n");
     scanf("%s", nombre);
     printf("Hola %s, tu inicial es: %c\n", nombre, *nombre);
     printf("Tu dirección en memoria es: %p\n", nombre);


     return 0;
 }