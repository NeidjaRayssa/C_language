#include <stdio.h>
#include <stdlib.h>
int main() {
 int num;
 printf("digite um número:\n");
 scanf("%i", &num);
 printf("o antecessor de %i é %i", num, num - 1);
 printf(" e o sucessor é %i", num + 1);
 return 0;
}
