#include <stdio.h>
#include <stdlib.h>
/*int main() {
 int x;
 int y;
 int *px; /* variable de tipo puntero a entero */
 /*x = 5;
 px = &x; /* asigna a px la direccion de x */
 /*y = *px;*/ /* asigna a y el contenido de la direccion
 * almacenada en px *//*
printf("x = %d\n", x);
printf("y = %d\n", y);
printf("*px = %d\n", px);
 return 0;
}*/

//segundo bloque de código

/*int main() {
    char url [] = "http://www.aprenderaprogramar.com";
    printf ("%s\n", url) ;
    puts (url);
    return 0;
}*/

//Tercer bloque de código

 int main( ) {

char *cadena;
cadena = "Hola Mundo_";

printf("Valor de cadena = %p\n", cadena);
printf("Valor indirecto de cadena = %c\n", *cadena);
puts(cadena);
return 0;

 }