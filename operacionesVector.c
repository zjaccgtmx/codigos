#include <stdio.h>
#include <math.h>

int main(){

    int tamano;
    printf("Escriba el tamaño del vector\n");
    scanf("%d", &tamano);
    float vector1[tamano], suma=0, suma2=0, media, varianza, desviacion;

    for (int i = 0; i < tamano; i++){
        printf("Ingrese el valor de la posición %i\n", i);
        scanf("%f", &vector1[i]);

        suma = suma + vector1[i];
        suma2 = suma2 + (vector1[i]*vector1[i]);
    }

    //Media
    media=suma/tamano;

    varianza = ((tamano*suma2)-(suma*suma))/(tamano*(tamano-1));

    desviacion = sqrt(varianza);

    printf("La media es: %f\nLa varianza es: %f\nLa desviación es: %f\n", media, varianza, desviacion);

    return 0;
}