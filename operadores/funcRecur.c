#include <stdio.h>
long Factorial(long numero);
int main(){

    //factorial
    //y fibonacci xD

    int numero;
    printf("Ingresa un número\n");
    scanf("%i", &numero);
   // for (int i = 0; i <= numero; i++)
    //{
        printf("%ld\n", Factorial(numero));
    //}
    

    return 0;
}

long Factorial(long numero){
    if(numero<=1){
        return 1;
    }else{
       //return(numero * Factorial(numero-1));
        return Factorial(numero-1) + Factorial(numero-2);
        }
}