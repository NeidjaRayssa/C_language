#include <stdio.h>
#include <stdlib.h>
int main() {
 int num;
 printf("digite um número:\n");
 scanf("%i", &num);
 printf("o cubo de %i é %i", num, num * num * num);
 return 0;
}
