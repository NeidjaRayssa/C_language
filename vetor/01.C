//Dado um vetor com 100 valores inteiros, verifique a soma dos numeros pares, quantidade de
//números pares e números impares.
#include <stdio.h>
main(){
int v[100], p, soma=0, par=0;
for(p=1; p<=100; p++){
printf("digite o valor:\n");
scanf("%d", &v[p]);
if(v[p]%2==0){
soma = soma + v[p];
par++;
}
}
printf("soma dos pares: %d \n", soma);
printf("quantidade de pares: %d \n", par);
printf("numeros impares: %d \n", 100-par);
return 0; }