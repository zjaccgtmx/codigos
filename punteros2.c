 #include <stdio.h>

int main ( void )
{
   
    int x, y, *px;
    x = 12;
    y = 7;
   
    px = &x;
    printf ("Valor de x %d, de y %d y de *px %d\n", x, y, *px);
    px = &y;
    printf ("Valor de x %d, de y %d y de *px %d\n", x, y, *px);

    return 0;
}