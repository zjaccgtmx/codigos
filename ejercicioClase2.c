#include <stdio.h>
#include <string.h>

int main(){

    char copiar[50];
    char texto[]="Esto se copió";
    char concatenar[]="esto se concatenó";

    strcpy(copiar, texto);
    strcat(copiar, " y ");
    strcat(copiar, concatenar);
    printf("El texto completo es: %s\n", copiar);
    

    return 0;
}