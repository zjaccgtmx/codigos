#include <stdio.h>

int main(){

    int tamano;
    printf("Escriba el tamaño del vector\n");
    scanf("%d", &tamano);
    int vector1[tamano], vector2[tamano];

    for (int i = 0; i < tamano; i++){
        printf("Ingrese el valor de la posición %i\n", i);
        scanf("%i", &vector1[i]);
    }

    for (int i = 0; i < tamano; i++){
        vector2[i]=vector1[i];
    }

    for (int i = 0; i < tamano; i++){
        printf("El dato copiado en la posición %i es %d\n", i, vector2[i]);
    }

    return 0;
}