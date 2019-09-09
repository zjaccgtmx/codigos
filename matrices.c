#include <stdio.h>

int main(){

    float alumnos[2][4], suma=0;
    float promedio=0, carnet;
    int condicion = 0, opciones=0, entro, pos;

    for (int fila = 0; fila < 2; fila++){
            printf("Ingrese el carnet del alumno #%d\n", fila+1);
            scanf("%f", &alumnos[fila][0]);
    }

do
{

    do
    {
        printf("Escoja la opción:\n1.Ingresar calificaciones\n2.Ver estudiantes y notas\n3.Buscar estudiante\n4.Ver promedios\n5.Salir\n");
        scanf("%d", &opciones);
    } while ((opciones!=1)&&(opciones!=2)&&(opciones!=3)&&(opciones!=4)&&(opciones!=5));
    

    if (opciones==1){
        for (int fila = 0; fila < 2; fila++){
            printf("Ingrese la primera nota del alumno con carnet #%.0f\n", alumnos[fila][0]);
            scanf("%f", &alumnos[fila][1]);
            printf("Ingrese la segunda nota del alumno con carnet #%.0f\n", alumnos[fila][0]);
            scanf("%f", &alumnos[fila][2]);
    }
    }

    if (opciones==2){
        for (int fila = 0; fila < 2; fila++){
            printf("Carnet\tNota 1\tNota 2\n");
            printf("%.0f\t%.2f\t%.2f\n", alumnos[fila][0], 
            alumnos[fila][1], alumnos[fila][2]);
    }
    }
    
    if (opciones==3){
        printf("Ingrese el carnet del estudiante a buscar\n");
        scanf("%f", &carnet);
        for (int fila = 0; fila < 2; fila++){
            if (alumnos[fila][0]==carnet){
                entro = 1;
                pos = fila;
            }
        }
        if (entro == 1){
                printf("Carnet\tNota1\tNota2\tPromedio\t\n");
                printf("%.0f\t%.2f\t%.2f\t%.2f\t\n", alumnos[pos][0], alumnos[pos][1], 
                alumnos[pos][2], alumnos[pos][3]);
                entro = 0;
            }else{
                printf("El alumno no existe\n");
            }
    }

    if (opciones==4){
        for (int fila = 0; fila < 2; fila++){
        suma = alumnos[fila][1] + alumnos[fila][2];
        promedio = suma/2;
        alumnos[fila][3] = promedio;
        printf("Carnet\tNota 1\tNota 2\tPromedio\n");
        printf("%.0f\t%.2f\t%.2f\t%.2f\n", alumnos[fila][0],
         alumnos[fila][1], alumnos[fila][2], alumnos[fila][3]);
    }
    }
    
    if (opciones==5){
        break;
    }
 
      printf("¿Desea realizar otra operación?\n1.SI\n2.NO\n");
      scanf("%d", &condicion);
    } while (condicion==1);   
    

    return 0;
}