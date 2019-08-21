#include <stdio.h>
size_t getTamano(float *ptr);
int main(){

    float array[20];
    printf("El número de bytes en el arreglo es: %lu\n", sizeof(array));
    printf("El número de bytes por getsize es: %lu\n", getTamano(array));
    return 0;
}

size_t getTamano(float *ptr){

    return sizeof(ptr);
}