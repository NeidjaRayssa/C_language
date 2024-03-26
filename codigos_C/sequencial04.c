#include <stdio.h>
#include <stdlib.h>
int main() {
 float sal, rea;
 printf("qual o valor do salário:\n");
 scanf("%f", &sal);
 printf("qual o percentual de reajuste:\n");
 scanf("%f", &rea);
 printf("o novo salário é %.0f\n", sal + (sal * rea/100));
 return 0;
}
