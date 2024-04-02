//Construa um algoritmo que fica lendo indefinidamente numeros positivos. Caso o numero lido
//seja igual a 0 o algoritmo pára de ler números e imprime a média dos números pares lidos anteriormente.
include <stdio.h>
main(){
int num, soma=0, cont=0;
float media;
do{
printf("digite um numero:");
scanf("%d", &num);
cont++;
if(num%2==0){
soma = soma + num;
//cont++;
while(num!=0){
media = soma/cont;
}
}
printf("a media dos numeros pares e %.2f", media);
}
return 0;}