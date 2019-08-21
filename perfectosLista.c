#include <stdio.h>

int main(){

    int i, div, num, sum =0;

    printf("Ingrese el número máximo\n");
    scanf("%d", &num);

    for (i = 1; i < num; i++){
        if (i%2==0){
             for (div = (i/2); div >= 1; div--){
            if(i%div == 0){
                sum = sum + div;
            }
        }
        if (sum == i){
            printf("%d\n", i);
        }
        sum = 0;
        }
        
    }
    

    return 0;
}