//Leia um vetor de 100 números inteiros , a partir do vetor, gerar o vetor OPOSTO, que corresponde ao vetor ao contrário.
#include <stdio.h>
#include <stdlib.h>
int main(void) {
int v[100], p;
for(p=1; p<=100; p++){
printf("digite um numero inteiro:");
scanf("%d", &v[p]);
}
for(p=100; p>=1; p--){
printf("vetor oposto: %d\n", v[p]);
}
return 0;}
