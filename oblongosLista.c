#include <stdio.h>

int main(){

    int numero, mult = 0;

    printf("Ingrese número\n");
    scanf("%i", &numero);

    for (int i = 1; i <= numero; i++){
        mult= i * (i+1);
        printf("%i\n", mult);
    }
    

    return 0;
}