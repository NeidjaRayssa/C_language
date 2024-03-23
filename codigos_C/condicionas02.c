#include <stdio.h>
#include <stdlib.h>
int main() {
 int n1, n2, n3;
 printf("Digite um número:\n");
 scanf("%d", &n1);
 printf("Digite um número:\n");
 scanf("%d", &n2);
 printf("Digite um número:\n");
 scanf("%d", &n3);
 if (n1 == n2 && n1 == n3){
 printf("Todos os números são iguais\n");}
 else if (n1 == n2 || n1 == n3 || n2 == n3){
 printf("dois dos números são iguais\n");}
 else{
 printf("todos os números são diferentes\n");}
 return 0;
}
