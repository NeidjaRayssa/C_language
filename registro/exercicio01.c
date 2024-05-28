//1. Uma organizadora de concursos deseja implementar um sistema que possua um menu com as seguintes opções:
//a. Caso seja escolhida a opção 1 o sistema deve: Ler matricula, nota e nomes de 100 candidatos e  armazenar em um vetor;
//b. Caso seja escolhida a opção 2 o sistema deve: Exibir média geral de todos os candidatos;
//c. Caso seja escolhida a opção 3 o sistema deve: Exibir o nome do candidato que teve a maior e menor nota;
//d. Caso seja escolhida a opção 4 o sistema deve: Ler uma matricula e buscar esse candidato imprimindo o nome e sua nota; caso não seja encontrado o candidato com o nome lido, deverá ser impressa a mensagem “Candidato não encontrado”;
//e. Caso seja escolhida a opção 0 o sistema deve: finalizar sua execução.

#include <stdio.h>

typedef struct{
int mat;
float nota;
char nome[100];
}Taluno;
Taluno aluno[3];

int main(){
int p;
int opcao;
float soma=0;

while(opcao!=0){
printf("digite um numero de acordo com as opcoes: \n");
printf("1- Ler matricula, nota e nomes de candidatos. \n");
printf("2- Exibir media de todos candidatos.\n");
printf("3- Exibir o nome do candidato que teve a maior e menor nota.\n");
printf("4- Buscar por candidato pela matricula.\n");
printf("0- Sair do sistema. \n");
scanf("%d", &opcao);

if(opcao == 1){
for(p=1;p<=3;p++){
printf("Matricula:\n");
scanf("%d",&aluno[p].mat);

printf("Nota:\n");
scanf("%f", &aluno[p].nota);
// fflush(stdin);
printf("Nome:\n");
scanf("%s", &aluno[p].nome);
  }
 }
if(opcao == 2){
int soma=0;
float media;
soma += aluno[p].nota;
soma/3 == media;
printf("media: %.1f \n", media);
 }
if(opcao == 3){
int maior=0;
int menor=0;
for(p=1;p<=3;p++){
if(aluno[p].nota>maior){
maior = aluno[p].nota;
 }
if(aluno[p].nota<menor){
menor = aluno[p].nota;
   }
  }
printf("maior nota: %d \n", maior);
printf("menor nota: %d \n", menor);

 }
if(opcao == 4){
int matricula;
printf("digite a matricula:");
scanf("%d",&matricula);
for(p=1;p<=3;p++){
if(matricula == aluno[p].mat){
printf("matricula: %d \n", aluno[p].mat);
printf("nota: %.1f \n", aluno[p].nota);
printf("nome: %c \n", aluno[p].nome);
} else{printf("Candidato não encontrado!");}
   }
  }
 }
return 0;
}