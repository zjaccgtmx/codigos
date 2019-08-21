#include <stdio.h>

int main(){

    int tamano;
    printf("Escriba el tamaño del vector\n");
    scanf("%d", &tamano);
    int vector1[tamano];
    int decision, eliminar;

    for (int i = 0; i < tamano; i++){
        printf("Ingrese el valor de la posición %i\n", i);
        scanf("%i", &vector1[i]);
    }

    for (int i = 0; i < tamano; i++){
        printf("Los valores son: %d\n", vector1[i]);
    }

    printf("¿Desea eliminar algún elemento?\n(0: NO, 1: SI)\n");
    scanf("%d", &decision);
    
    if (decision==1){
        printf("¿Cual valor desea eliminar? (Posición)\n");
        for (int i = 0; i < tamano; i++){
            printf("%d\n", vector1[i]);
        }
        scanf("%d", &eliminar);
        vector1[eliminar]=0;
        printf("Eliminado\n");
        for (int i = 0; i < tamano; i++){
            if(vector1[i]==0){
                printf("-\n");
            }else{
            printf("%d\n", vector1[i]);
            }
        }
    }   
    


    return 0;
}