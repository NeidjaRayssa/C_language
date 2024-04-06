//Leia um vetor de 100 números inteiros e exiba qual o maior e o menor número desse vetor e suas respectivas posições.
#include <stdio.h>
int main(void) {
int v[100], p, cont=0;
for(p=1; p<=100; p++){
printf("digite um numero inteiro:");
scanf("%d", &v[p]);
if(v[p]%2!=0 && v[p]<200 && v[p]>100){
cont += v[p];
}}
printf("a soma dos impares e: %d", cont);
return 0; }
