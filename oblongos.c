#include <stdio.h>

int main(){

    int numero, mult = 0, entra=0;

    printf("Ingrese número\n");
    scanf("%i", &numero);

    for (int i = 1; i <= numero; i++){
        mult = i * (i+1);
        if(mult == numero){
            printf("El número %i es oblongo\n", numero);
            entra = 1;
            break;
        }else{
            continue;
        }
    }

    if (entra==0){
        printf("No es oblongo\n");
    }else if (entra==1){
        printf("");
    }

    return 0;
}