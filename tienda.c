#include <stdio.h>

int main(){

    float productos[2][2];
    int decision, opciones;
    char *nombreProductos[]={
        "Producto 1",
        "Producto 2"
    };


    do
    {
        printf("¿Qué desea realizar?\n1.Agregar códigos de producto\n2.Agregar precio de producto\n3.Mostrar productos\n");
        scanf("%d", &opciones);

        switch (opciones)
        {
        case 1:
        for (int i = 0; i < 2; i++){
        printf("Ingrese el código del producto %s\n", nombreProductos[i]);
        scanf("%f", &productos[i][0]);
        }
            break;
        
        case 2:
        for (int i = 0; i < 2; i++){
        printf("Ingrese el precio del producto %s\n", nombreProductos[i]);
        scanf("%f", &productos[i][1]);
        }
            break;

        
        case 3:
        for (int i = 0; i < 2; i++){
        printf("Código\tNombre\t\tPrecio\n");
        printf("%f\t%s\t%.2f\n", productos[i][0], nombreProductos[i], productos[i][1]);
        }
            break;    
        }

        
        printf("¿Desea realizar otra operación?\n1.SI 2.NO\n");
        scanf("%d", &decision);
    } while (decision==1);
    

    return 0;
}