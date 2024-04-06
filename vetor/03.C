//Faça um algoritmo, lê um vetor de números inteiros de 200 elementos e exibe a soma dos elementos ímpares do vetor.
#include <stdio.h>
int main(void) {
int v[200], p, cont=0;
for(p=1; p<=200; p++){
printf("digite um numero inteiro:");
scanf("%d", &v[p]); }
for(p=1; p<=200; p++){
if(v[p] % 2 != 0){
cont += v[p];
} }
printf("a soma dos elementos impares e %d ", cont);
return 0; }
