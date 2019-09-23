 #include <stdio.h>

int main ( void )
{
   
    int x, *px;
    x = 12;
    printf ("Valor de x %d, de ip %d", x, px);
    px = &x;
    *px = *px + 5;
    printf ("\nValor de x %d, de *px %d x de px %d", x, *px, px);
    x = *px + 10;
    printf ("\nValor de x %d, de *px %d", x, *px);
    *px += 1;
    printf ("\nValor de x %d, de *px %d\n\n", x, *px);

    return 0;
}
