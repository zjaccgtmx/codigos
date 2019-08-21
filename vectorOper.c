#include <stdio.h>

int main(){

    int tabla[10];
    int suma, resta, division, multiplicacion;

    for (int i = 0; i < 10; i++){
        printf("Introduzca un valor\n");
        scanf("%d", &tabla[i]);
    }

    suma = tabla[0];
    resta = tabla[0];
    division = tabla[0];
    multiplicacion = tabla[0];

    for (int i = 1; i < 10; i++){
        suma = suma + tabla[i];
        if (resta>=tabla[i]){
            resta = resta-tabla[i];
        }else if(resta<tabla[i]){
            resta=tabla[i]-resta;
        }
        multiplicacion = multiplicacion * tabla[i];
        if (division>=tabla[i]){
            division = division/tabla[i];
        }else if (division<tabla[i]){
            division = tabla[i]/division;
        }
        
        
    }

        printf("La suma es: %d\n", suma);
        printf("La resta es: %d\n", resta);
        printf("La división es: %d\n", division);
        printf("La multiplicación es: %d\n", multiplicacion);
    
    

    return 0;
}