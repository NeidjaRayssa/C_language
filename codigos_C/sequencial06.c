#include <stdio.h>
#include <stdlib.h>
int main() {
 float tp,pp,va;
 printf("quantidade de prestações do consórcio:\n");
 scanf("%f", &tp);
 printf("quantidade de prestações pagas:\n");
 scanf("%f", &pp);
 printf("valor atual da prestação:\n");
 scanf("%f", &va);
 printf("prestações a pagar:%4.0f\n", tp - pp);
 printf("saldo devedor atual é de %4.0f reais",(tp-pp)*va);
 return 0;
}
