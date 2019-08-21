#include <stdio.h>

int main(){

    int num1, num2, div, i, sum1=0, sum2=0, gem;

    printf("Ingrese el primer número\n");
    scanf("%i", &num1);
    printf("Ingrese el segundo número\n");
    scanf("%i", &num2);

    for (i = 1; i <= num1; i++){
        div = num1%i;
        if (div==0){
            sum1 = sum1 +1;
        }
    }
    if (sum1==2){
        for(int j=1; j<=num2; j++){
            div = num2%j;
            if (div == 0){
                sum2 = sum2 +1;
            }
        }
        if (sum2 == 2){
            if (num1 > num2){
                gem = num1-num2;
                if (gem == 2){
                    printf("Los numeros %i y %i son primos gemelos\n", num1, num2);
                }else
                {
                    printf("No son primos gemelos\n");
                }
            }else if(num2 > num1){
                gem = num2-num1;
                if (gem == 2){
                    printf("Los numeros %i y %i son primos gemelos\n", num1, num2);
                }else
                {
                    printf("No son primos gemelos\n");
                }
            }
            
        }else
        {
            printf("El número %i no es primo\n", num2);
        }
        
    }else
    {
        printf("El numero %d no es primo\n", num1);
    }
    
    return 0;
}