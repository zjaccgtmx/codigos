#include <stdio.h>
#include <stdlib.h>
int main() {
 int *p;
 *p = 5;//Violación de segmento
 printf("%d\n", p);
 return 0;
}
