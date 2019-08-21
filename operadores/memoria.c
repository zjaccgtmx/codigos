#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define lenght 2
int size;

struct dog
{
    char nombre[20];
    char *P_name;
}dogs[lenght];

int main(){


    for (int i = 0; i < lenght; i++)
    {
        printf("Ingrese el nombre del perro\n");
        scanf("%s", dogs[i].nombre);
        size = strlen(dogs[i].nombre);
        printf("%i\n", size);
        dogs[i].P_name = malloc(size * sizeof(char));
        if (NULL == dogs[i].P_name)
        {
            printf("Error al asignar memoria\n");
        }else
        {
            strcpy(dogs[i].P_name, dogs[i].nombre);
        }
        
                
    }

    for (int i = 0; i < lenght; i++)
    {
        printf("El nombre del perro es %s\n", dogs[i].P_name);
    }
    
    

    return 0;
}