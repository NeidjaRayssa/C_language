/*Escreva um programa no qual o usuário digita uma quantidade arbitrária de números inteiros positivos. 
Quando o usuário digitar um número menor ou igual a 0, o programa deve indicar o tamanho da maior 
sequência crescente observada. Por exemplo, se os números digitados forem 5, 10, 3, 2, 4, 7, 9, 8, 5, 
a maior sequência crescente é 2, 4, 7, 9, então o programa deve mostrar na tela que a maior sequência 
crescente tem 4 números. Já a sequência 10, 8, 7, 5, 2 está em ordem decrescente, portanto a maior 
sequência crescente observada tem tamanho 1.*/

#include <stdio.h>

int main() {
    int num, anterior, atual, NumAtual = 1, maiorNum = 1;

    printf("Digite numeros inteiros positivos (digite um número menor ou igual a 0 para terminar):\n");
    scanf("%d", &anterior);
    
    while (1) {
        scanf("%d", &atual);
        if (atual <= 0) {
            break;
        }

        if (atual > anterior) {
            NumAtual++;
        } else {
            if (NumAtual > maiorNum) {
                maiorNum = NumAtual;
            }
            NumAtual = 1;
        }

        anterior = atual;
    }

    if (NumAtual > maiorNum) {
        maiorNum = NumAtual;
    }

    printf("A maior sequencia crescente tem %d numeros.\n", maiorNum);

    return 0;
}