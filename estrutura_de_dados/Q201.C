/*Fazer um programa para cadastro e diálogo de login. O programa deve:
Cadastrar um nome de usuário via teclado. O nome de usuário tem, no máximo, 
8 caracteres, sendo válidos somente os caracteres numéricos e as letras maiúsculas ou minúsculas. 
Somente os caracteres válidos devem ser exibidos no console durante a digitação do nome de usuário.
Cadastrar uma senha do usuário via teclado. Esta segue as mesmas regras do nome de usuário, com a 
diferença de que são exibidos somente asteriscos no console à medida que a senha é digitada.
Receber um novo nome de usuário e uma nova senha, utilizando os mesmos procedimentos descritos 
nos itens a e b. Comparar o nome de usuário cadastrado com o recebido posteriormente e a senha 
cadastrada com a senha recebida. Caso sejam idênticos, informar “OK”, do contrário informar “Acesso negado”.*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MaxCaracteres 8

void lerNomeUsuario(char *nome){
    char Nome;
    int i = 0;
    printf("Digite o nome de usuario (ate 8 caracteres): ");
    while (i < MaxCaracteres && (Nome = getchar()) != '\n'){
        nome[i++] = Nome;
    }
    printf("\n");
}

void lerSenha(char *senha){
    char Senha;
    int i = 0;
    printf("Digite a senha (ate 8 caracteres): ");
    while (i < MaxCaracteres && (Senha = getchar()) != '\n'){
        senha[i++] = Senha;
        putchar('*');
    }
    printf("\n");
}

int main(){
    char nomeUsuario[MaxCaracteres + 1]; 
    char senhaUsuario[MaxCaracteres + 1]; 
    char nomeLogin[MaxCaracteres + 1]; 
    char senhaLogin[MaxCaracteres + 1]; 

   
    lerNomeUsuario(nomeUsuario);
    lerSenha(senhaUsuario);

    printf("Login:\n");
    lerNomeUsuario(nomeLogin);
    lerSenha(senhaLogin);

    if (strcmp(nomeUsuario, nomeLogin) == 0 && strcmp(senhaUsuario, senhaLogin) == 0){
        printf("Ok\n");
    } else{
        printf("Acesso negado\n");
    }
    return 0;
}
