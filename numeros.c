#include <stdio.h>

int suma(int n){
    if (n==1){
        return 1;
    }else{
        return (n+suma(n-1));
    } 
}

int main(){
    int numero;
    printf("Cuantos números desea sumar:");
    scanf("%d", &numero);
    printf("%d", suma(numero));

    return 0;
}