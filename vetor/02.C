//Dado um vetor com 100 elementos, preencha-o com valores aleatórios e imprima na tela os
//valores que ocupam posições pares no vetor. Ex: vetor[2], vetor[4], vetor[6],... etc.
#include <stdio.h>
main(){
int v[100], p;
for(p=1; p<=100; p++){
printf("digite os valores:\n");
scanf("%d", &v[p]);
}
for(p=2; p<=100; p+=2){
printf("vetor: %d, valor: %d \n", p ,v[p]);
}
return 0; }