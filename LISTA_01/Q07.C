#include <stdio.h>
#include <stdlib.h>

// Estrutura do nó da lista encadeada
struct Node{
    int data;
    struct Node* next;};

int isSorted(struct Node* head){
    struct Node* temp = head;

    while (temp != NULL && temp->next != NULL){
        if (temp->data > temp->next->data) {
            return 0;} // Não ta em ordem crescente
        temp = temp->next;}
    return 1; // ta em ordem crescente
}

int main(){
    // nós da lista 1 -> 2 -> 3 -> 4
    struct Node* n1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* n2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* n3 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* n4 = (struct Node*)malloc(sizeof(struct Node));

    n1->data = 1;
    n1->next = n2;

    n2->data = 2;
    n2->next = n3;

    n3->data = 3;
    n3->next = n4;

    n4->data = 4;
    n4->next = NULL;

    // Verifica se a lista está em ordem crescente
    if (isSorted(n1)){
        printf("A lista esta em ordem crescente.\n");
    } else {
        printf("A lista nao esta em ordem crescente.\n");}
        
    free(n1);
    free(n2);
    free(n3);
    free(n4);

    return 0;
}
