#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int i=0;
    char *msj;
    msj=(char *) malloc(30);
    strcpy(msj, "Hola Mundo.-");
    puts(msj);

    while (msj[i] != 0){
        printf("%c\t", msj[i]);
        i++;
    }

    putchar('\n');
    i=0;

    while (*(msj) != 0){
        printf("%c\t", *(msj));
        msj++;
    }
    

    return 0;
}