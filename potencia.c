#include <stdio.h>

long potencia(int n, int x){
    if (n==1){
        return x;
    }else{
        return x*potencia(n-1, x);
    }
}

int main(){
    int numero, elevado;
    printf("Qué número desea elevar?");
    scanf("%d", &numero);
    printf("A qué potencia?");
    scanf("%d", &elevado);
    printf("%ld", potencia(elevado, numero));

    return 0;
}