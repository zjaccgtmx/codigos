#include <stdio.h>

int invertir(int n){
    if (n < 10){
        return n;
    }else{
        return invertir(n/10) + (n%10)*10;
    }
    
    
}

int main(){

    int n;
    printf("Ingrese un número\n");
    scanf("%d", &n);
    
        printf("%d\t", invertir(n));
    
    printf("\n");

    return 0;
}