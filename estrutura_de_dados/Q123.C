/*O objetivo é gerar um vetor que contenha N elementos distintos, com valores entre 0 e N-1, 
em uma ordem aleatória. Antes de procurar no Google ou consultar colegas, tente pensar a fundo 
no problema e chegar sozinho a uma solução - este é um daqueles exercícios nos quais pensar na 
solução é mais importante do que chegar nela!*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 52

void embaralhar(int *vetor, int tamanho) {
    int i, n, tempo;
    for (i = tamanho - 1; i > 0; i--) {
        n = rand() % (100);
        tempo = vetor[i];
        vetor[i] = vetor[n];
        vetor[n] = tempo;
    }
}
int main() {
    int baralho[TAMANHO];
    int i;

    printf("Vetor embaralhado:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("%d, ", baralho[i]);
    } 
    printf("\n");

    return 0;
}