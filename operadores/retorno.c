#include <stdio.h>
int suma();
int num3 = 3;
int main(){

    int num1, num2;

    printf("Ingresa el primer número\n");
    scanf("%i", &num1);
    printf("Ingresa el segundo número\n");
    scanf("%i", &num2);

    printf("El resultado es: %i\n", suma(num1, num2));

    return 0;
}

int suma(int numb1, int numb2){
    int suma;
    suma = numb1 + numb2 + num3;
    return suma;

}