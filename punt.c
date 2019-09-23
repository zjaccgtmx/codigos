#include <stdio.h>
#include <stdlib.h>

int main(){

    int *ptr, i;

    ptr = (int *)malloc(10*sizeof(int));

    if (ptr==NULL)
        printf ("Error de Mem.");

    for (i=0; i<10; i++){
        ptr[i]=i+1;        
    }
        

    for(i = 0; i < 10; i++)
    {
        printf("%d\n",*(ptr+i));
    }


    return 0;
}