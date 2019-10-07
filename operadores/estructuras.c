//Colección de uno o más elementos
#include <stdio.h>
struct perro
{
    char nombre[30];
    int edadMeses;
    float peso;
}perros[2];

int main(){

    for (int i = 0; i < 2; i++)
    {
        printf("%i Ingrese el nombre del perro\n", i+1);
        scanf("%s", &perros[i].nombre);
        printf("%i Ingrese la edad en meses del perro\n", i+1);
        scanf("%i", &perros[i].edadMeses);
        printf("%i Ingrese el peso del perro\n", i+1);
        scanf("%f", &perros[i].peso);
    }

    for (int i = 0; i < 2; i++)
    {
        printf("El peso de %s es %.2f kg y su edad es %i meses\n", perros[i].nombre, perros[i].peso, perros[i].edadMeses);
    }
    
    return 0;
}