#include <stdio.h>
#include <stdlib.h>

int main(){

   /* typedef struct {
        char campo1[60];
        int campo2;
        float campo3;

        x *campo4;
    }x;

    x var;

    var.campo1 = "Este campo es una cadena";
    var.campo2 = 5;
    var.campo3 = 10.5;
    var.campo4 = (x *) malloc(sizeof x); // este campo es un puntero a x**/

    struct infopersona {
        char direccion[25];
        char ciudad[20];
        char provincia[20];
        long int codigo_postal;
    };

    struct empleado{
        char nombre_empleado[25];
        //anidamos la estructura anterior
        struct infopersona direcc_empleado;
        double salario;
    };

    struct cliente{
        char nombre_cliente[25];
        struct infopersona direcc_cliente;
        double saldo;
    };
    

    return 0;
}