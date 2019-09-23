#include <stdio.h>
#include <stdlib.h>

void intercambiar(int *p_a, int *p_b){
    *p_a=*p_a+*p_b;
    *p_b=*p_a-*p_b;
    *p_a=*p_a-*p_b;
}

int main(){
    int a=5;
    int b=10;

    intercambiar(&a,&b);

    printf("El número de a es %d\n", a);
    printf("El número de b es %d\n", b);


    return 0;
}