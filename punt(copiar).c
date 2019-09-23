#include <stdio.h>
#include <stdlib.h>

/*void funcion (int a, int b);
//Parámetros por valor
int main(){

    int x = 2;
    int y = 5;

    printf("Antes x = %d, y = %d\n", x, y);
    funcion(x, y);
    printf("Despues x = %d, y = %d\n", x, y);


    return 0;
}

void funcion(int a, int b){
    a=0;
    b=0;

    printf("Dentro x = %d, y = %d\n", a, b);
    return;
}*/

//Parámetros por referencia

void funcion(int *a, int *b);

int main(){

    int x = 2;
    int y = 5;
    printf("Antes x = %d, y = %d\n", x, y);
    funcion(&x, &y);
    printf("Despues x = %d, y = %d\n", x, y);

    return 0;
}

    void funcion(int *a, int *b){
        *a=0;
        *b=0;
        printf("Dentro x = %d, y = %d\n", *a, *b);
        return;
    }

