#include <stdio.h>
#include <string.h>

int main(){

    /*char nombre[20];
    //char nombre[]={'L','u','i','s'};

    printf("Escriba su nombre (20 letras máximo):\n");
    scanf("%s", nombre);
    printf("El nombre es: %s\n", nombre);
    printf("El tamaño es: %d\n", sizeof nombre);

    return 0;
}*/

/*int main(){

    char *errores[] = {
		"No se ha producido ningún error",
		"No hay suficiente memoria",
		"No hay espacio en disco",
		"Me he cansado de trabajar"
		};


        for (int i = 0; i < 4; i++){
            printf("Error: %s\n", errores[i]);
        }
        

    return 0;*/

    char *prueba[] = {
        "Hola",
        "Buenas"
    };

    int prueba2[2];

    for (int i = 0; i < 2; i++){
        printf("Ingrese el código del elemento %s\n", prueba[i]);
        scanf("%d", &prueba2[i]);
    }
    
    for (int i = 0; i < 2; i++){
        printf("Código\tNombre\n");
        printf("%d\t%s\n", prueba2[i], prueba[i]);
    }
    

}