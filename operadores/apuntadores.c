//Variables cuyos valores son direcciones de memoria

#include <stdio.h>
void cubo(int *n);
int main(){

    /* int a = 2;
    int *apt = &a;

    printf("%p\n", apt); */

    int num = 5;
    printf("Número original: %i\n", num);
    cubo(&num);
    printf("El valor al cubo es: %i\n", num);

    return 0;
}

void cubo(int *n){
    *n = *n * *n * *n;
}