 #include <stdio.h>

int main(){

    int numero, divisor, contador, posicion, tabla[100];

    posicion=0;

    for (numero = 1; numero <= 100; numero++){
        contador = 0;
        for (divisor = 1; divisor <= numero; divisor++){
            if (numero%divisor==0){
                contador++;
            }
        }
        if (contador==2){
            tabla[posicion]=numero;
            posicion++;
        }
    }

    for (int i = 0; i < posicion; i++){
        printf("%d\n", tabla[i]);
    }

    return 0;
} 
