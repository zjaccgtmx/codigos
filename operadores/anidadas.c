#include <stdio.h>
#define lenght 2

struct owner
{
    char nombre[20];
    char direccion[30];
};


struct dog
{
    char nombre[20];
    int edadMeses;
    struct owner ownerDog;
}dogs[lenght];

int main(){

    for (int i = 0; i < lenght; i++)
    {
        printf("Nombre del perro\n");
        scanf("%s", dogs[i].nombre);
        printf("Edad del perro en meses \n");
        scanf("%i", &dogs[i].edadMeses);
        printf("Nombre del dueño\n");
        scanf("%s", dogs[i].ownerDog.nombre);
        printf("Dirección del dueño\n");
        scanf("%s", dogs[i].ownerDog.direccion);
        printf("\n");
    }

    for (int i = 0; i < lenght; i++)
    {
        printf("La edad de %s es %i meses\n", dogs[i].nombre, dogs[i].edadMeses);
        printf("El dueño de %s se llama %s y vive en %s\n", dogs[i].nombre, dogs[i].ownerDog.nombre, dogs[i].ownerDog.direccion);
    }
    
    

    return 0;
}